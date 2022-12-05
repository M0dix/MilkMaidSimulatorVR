using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CowAnimationScript : MonoBehaviour
{
    public Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(PlayAnimation());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator PlayAnimation()
    {
        while (true)
        {
            animator.SetBool("play", true);
            yield return new WaitForSeconds(10);
            animator.SetBool("play", false);
        }
    }
}
