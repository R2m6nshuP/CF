<h2><a href="https://codeforces.com/contest/1092/problem/A" target="_blank" rel="noopener noreferrer">1092A — Uniform String</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1092A](https://codeforces.com/contest/1092/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Uniform String</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$n$$$ and $$$k$$$.</p><p>Your task is to construct such a string $$$s$$$ of length $$$n$$$ that for each $$$i$$$ from $$$1$$$ to $$$k$$$ there is at least one $$$i$$$-th letter of the Latin alphabet in this string (the first letter is 'a', the second is 'b' and so on) and there are no other letters except these. You have to <span class="tex-font-style-bf">maximize the minimal frequency</span> of some letter (the frequency of a letter is the number of occurrences of this letter in a string). If there are several possible answers, you can print <span class="tex-font-style-bf">any</span>.</p><p>You have to answer $$$t$$$ <span class="tex-font-style-bf">independent</span> queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of queries.</p><p>The next $$$t$$$ lines are contain queries, one per line. The $$$i$$$-th line contains two integers $$$n_i$$$ and $$$k_i$$$ ($$$1 \le n_i \le 100, 1 \le k_i \le min(n_i, 26)$$$) — the length of the string in the $$$i$$$-th query and the number of characters in the $$$i$$$-th query.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ lines. In the $$$i$$$-th line print the answer to the $$$i$$$-th query: <span class="tex-font-style-bf">any</span> string $$$s_i$$$ satisfying the conditions in the problem statement with constraints from the $$$i$$$-th query.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041659408029340006" id="id0031921277670096426" class="input-output-copier">Copy</div></div><pre id="id0041659408029340006">3
7 3
4 4
6 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003407056728627058" id="id009052050721577289" class="input-output-copier">Copy</div></div><pre id="id003407056728627058">cbcacab
abcd
baabab
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example query the maximum possible minimal frequency is $$$2$$$, it can be easily seen that the better answer doesn't exist. Other examples of correct answers: "<span class="tex-font-style-tt">cbcabba</span>", "<span class="tex-font-style-tt">ccbbaaa</span>" (any permutation of given answers is also correct).</p><p>In the second example query any permutation of first four letters is acceptable (the maximum minimal frequency is $$$1$$$).</p><p>In the third example query any permutation of the given answer is acceptable (the maximum minimal frequency is $$$3$$$).</p></div>