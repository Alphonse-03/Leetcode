# Overlapping Intervals
## Medium 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a collection of Intervals, the task is to merge all of the overlapping Intervals.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong><span style="font-size:18px">
Intervals = {{1,3},{2,4},{6,8},{9,10}}
<strong>Output: </strong>{{1, 4}, {6, 8}, {9, 10}}<strong>
Explanation: </strong>Given intervals: [1,3],[2,4]
[6,8],[9,10], we have only two overlapping
intervals here,[1,3] and [2,4]. Therefore
we will merge these two and return [1,4],
[6,8], [9,10].</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong><span style="font-size:18px">
Intervals = {{6,8},{1,9},{2,4},{4,7}}
<strong>Output: </strong>{{1, 9}}</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function<strong> overlappedInterval()</strong> that takes the list N intervals&nbsp;as input parameters and returns sorted list&nbsp;of intervals after merging.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N*Log(N)).<br>
<strong>Expected Auxiliary Space:</strong> O(Log(N)) or O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 100<br>
0 ≤ x ≤ y ≤ 1000</span></p>
 <p></p>
            </div>