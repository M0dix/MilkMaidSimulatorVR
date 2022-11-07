/************************************************************************************

See SampleFramework license.txt for license terms.  Unless required by applicable law 
or agreed to in writing, the sample code is provided “AS IS” WITHOUT WARRANTIES OR 
CONDITIONS OF ANY KIND, either express or implied.  See the license for specific 
language governing permissions and limitations under the license.

************************************************************************************/

using System;
using UnityEngine;
using System.Collections;
using JetBrains.Annotations;
using UnityEngine.Assertions;
using UnityEngine.XR.Interaction.Toolkit;
using Newtonsoft.Json.Bson;
using System.Reflection.Emit;
#if UNITY_EDITOR
using UnityEngine.SceneManagement;
#endif

/// <summary>
/// Simply aggregates accessors.
/// </summary>
public class LocomotionController : MonoBehaviour
{
    public XRController leftTeleportRay;
    public XRController rightTeleportRay;
    public InputHelpers.Button teleportActivationButton;
    public float activationThreshold = 0.0000000001f;
    public OVRCameraRig CameraRig;
    //public CharacterController CharacterController;
    public CapsuleCollider CharacterController;
	//public OVRPlayerController PlayerController;
	public SimpleCapsuleWithStickMovement PlayerController;

    public bool enableLeftTeleport { get; set;  } = true;
    public bool enableRightTeleport { get; set;  } = true;
    
    private bool isLeftActive = false;
    private bool isRightActive = false;
    private int i, j;

    void Start()
    {
        leftTeleportRay.gameObject.SetActive(false);
        rightTeleportRay.gameObject.SetActive(false);
    }

    void Update()
    {

    }

    private void FixedUpdate()
    {
        if (enableLeftTeleport && CheckIfActive(leftTeleportRay))
        {
            if (i < 20)
            {
                i++;
            }
            else
            {
                isLeftActive = !isLeftActive;
                leftTeleportRay.gameObject.SetActive(isLeftActive);
                i = 0;
            }
        }

        if (enableRightTeleport && CheckIfActive(rightTeleportRay))
        {
            if (j < 20)
            {
                j++;
            }
            else
            {
                isRightActive = !isRightActive;
                rightTeleportRay.gameObject.SetActive(isRightActive);
                j = 0;
            }
        }
    }

    public bool CheckIfActive(XRController controller)
    {
        InputHelpers.IsPressed(controller.inputDevice, teleportActivationButton, out bool isActivated, activationThreshold);
        return isActivated;
    }
}
