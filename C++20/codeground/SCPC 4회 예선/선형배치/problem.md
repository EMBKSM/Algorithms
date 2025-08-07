<!DOCTYPE html>
<html>
  <head>
    <title>Host Information</title>
    <meta http-equiv="refresh" content="5" />
    <style>
      /* 기본 스타일 설정 */
      body {
        font-family: sans-serif;
        background-color: #f4f4f4;
        padding: 20px;
      }
      /* 각 섹션을 묶는 테두리 스타일 */
      fieldset {
        border: 1px solid #ccc;
        border-radius: 8px;
        margin-bottom: 20px;
        padding: 20px;
        background-color: #fff;
      }
      /* 섹션 제목 스타일 */
      legend {
        font-weight: bold;
        font-size: 1.2em;
        color: #333;
      }
      /* 정보 테이블 스타일 */
      table {
        border-collapse: collapse;
        background-color: #e0e0e0;
        width: 100%;
      }
      th,
      td {
        border: 1px solid #999;
        padding: 8px;
        text-align: left;
      }
      th {
        background-color: #d0d0d0;
      }
      /* 텍스트 입력창 스타일 */
      input[type="text"] {
        width: calc(100% - 20px);
        padding: 8px;
        margin-bottom: 10px;
        border: 1px solid #ccc;
        border-radius: 4px;
      }
      /* 제출 버튼 스타일 */
      button {
        padding: 10px 15px;
        border: none;
        background-color: #007bff;
        color: white;
        border-radius: 4px;
        cursor: pointer;
      }
      button:hover {
        background-color: #0056b3;
      }
    </style>
  </head>
  <body>
    <div id="resize-Lright" class="layout-column ui-resizable Light" style="">
      <div class="stage-bar dropdown">
        <p>
          <span class="task-title ng-binding ellipsis">선형배치</span>
        </p>
      </div>
      <div class="stage-bar set_xs">
        <div class="buttonWrap white">
          <a href="javascript:mySubmitHistory();" class="button">나의 이력</a>
          <a href="javascript:submitHistory();" class="button">전체 제출이력</a>
          <a href="javascript:fncGoMenu('practiceQna')" class="button">QnA&nbsp;<em class="impact">(0)</em></a>
          <a href="javascript:goDetail();" class="button version floatR">기존 문제풀이 화면</a>
        </div>
      </div>
      <div class="stage-bar stage-btn-center">
        <button id="codegroundNote" type="button" class="btnReference">Codeground Note</button>
      </div>
      <div id="" class="stage-task flex">
        <div class="foldWrap n1">
          <div class="textBox">
            <p>
              <span style="font-size: 16px"
                ><span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-1-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-1" style="width: 1.143em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 0.895em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.59em, 1000.89em, 2.582em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-2"
                              ><span class="mi" id="MathJax-Span-3" style="font-family: MathJax_Math-italic"
                                >N<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                ></span></span></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.059em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.003em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-1">
                    N
                  </script></span
                >개의 정점으로 구성된 그래프
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-2-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;G&lt;/mi&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mi&gt;V&lt;/mi&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mi&gt;E&lt;/mi&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-4" style="width: 6.252em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 4.963em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.54em, 1004.86em, 2.83em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-5"
                              ><span class="mi" id="MathJax-Span-6" style="font-family: MathJax_Math-italic">G</span
                              ><span
                                class="mo"
                                id="MathJax-Span-7"
                                style="font-family: MathJax_Main; padding-left: 0.3em"
                                >=</span
                              ><span
                                class="mo"
                                id="MathJax-Span-8"
                                style="font-family: MathJax_Main; padding-left: 0.3em"
                                >(</span
                              ><span class="mi" id="MathJax-Span-9" style="font-family: MathJax_Math-italic"
                                >V<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.201em"
                                ></span></span
                              ><span class="mo" id="MathJax-Span-10" style="font-family: MathJax_Main">,</span
                              ><span
                                class="mi"
                                id="MathJax-Span-11"
                                style="font-family: MathJax_Math-italic; padding-left: 0.151em"
                                >E<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.052em"
                                ></span></span
                              ><span class="mo" id="MathJax-Span-12" style="font-family: MathJax_Main">)</span></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.372em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.378em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"
                        ><mi>G</mi><mo>=</mo><mo stretchy="false">(</mo><mi>V</mi><mo>,</mo><mi>E</mi
                        ><mo stretchy="false">)</mo></math
                      ></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-2">
                    G=(V,E)
                  </script></span
                >가 있다.<br />
                각 정점은 0과
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-3-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-13" style="width: 3.276em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 2.582em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.59em, 1002.53em, 2.681em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-14"
                              ><span class="mi" id="MathJax-Span-15" style="font-family: MathJax_Math-italic"
                                >N<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                ></span></span
                              ><span
                                class="mo"
                                id="MathJax-Span-16"
                                style="font-family: MathJax_Main; padding-left: 0.201em"
                                >−</span
                              ><span
                                class="mn"
                                id="MathJax-Span-17"
                                style="font-family: MathJax_Main; padding-left: 0.201em"
                                >1</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.184em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.066em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo>−</mo><mn>1</mn></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-3">
                    N-1
                  </script></span
                >&nbsp;사이의 번호로 구분된다.<br />
                <br />
                모든 정점을
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-4-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;x&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-18" style="width: 0.747em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 0.598em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.838em, 1000.55em, 2.582em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-19"
                              ><span class="mi" id="MathJax-Span-20" style="font-family: MathJax_Math-italic"
                                >x</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.059em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 0.691em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>x</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-4">
                    x
                  </script></span
                >축 상에 선형적으로 배치하는 문제, 즉
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-5-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;x&lt;/mi&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;0&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;x&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-21" style="width: 9.824em; display: inline-block"
                        ><span
                          style="display: inline-block; position: relative; width: 7.79em; height: 0px; font-size: 126%"
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.54em, 1007.69em, 2.83em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-22"
                              ><span class="mi" id="MathJax-Span-23" style="font-family: MathJax_Math-italic">x</span
                              ><span class="mo" id="MathJax-Span-24" style="font-family: MathJax_Main">(</span
                              ><span class="mn" id="MathJax-Span-25" style="font-family: MathJax_Main">0</span
                              ><span
                                class="mo"
                                id="MathJax-Span-26"
                                style="font-family: MathJax_Main; padding-left: 0.3em"
                                >≤</span
                              ><span
                                class="mi"
                                id="MathJax-Span-27"
                                style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                >x</span
                              ><span
                                class="mo"
                                id="MathJax-Span-28"
                                style="font-family: MathJax_Main; padding-left: 0.3em"
                                >≤</span
                              ><span
                                class="mi"
                                id="MathJax-Span-29"
                                style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                >N<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                ></span></span
                              ><span
                                class="mo"
                                id="MathJax-Span-30"
                                style="font-family: MathJax_Main; padding-left: 0.201em"
                                >−</span
                              ><span
                                class="mn"
                                id="MathJax-Span-31"
                                style="font-family: MathJax_Main; padding-left: 0.201em"
                                >1</span
                              ><span class="mo" id="MathJax-Span-32" style="font-family: MathJax_Main">)</span></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.372em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.378em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"
                        ><mi>x</mi><mo stretchy="false">(</mo><mn>0</mn><mo>≤</mo><mi>x</mi><mo>≤</mo><mi>N</mi
                        ><mo>−</mo><mn>1</mn><mo stretchy="false">)</mo></math
                      ></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-5">
                    x(0≤x≤N-1)
                  </script></span
                >의 각 위치에 정점을 하나씩 배치하는 문제를 고려하자.<br />
                선형 배치된 그래프의 정점
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-6-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;v&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-33" style="width: 0.647em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 0.499em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.838em, 1000.5em, 2.582em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-34"
                              ><span class="mi" id="MathJax-Span-35" style="font-family: MathJax_Math-italic"
                                >v</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.059em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 0.691em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>v</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-6">
                    v
                  </script></span
                >의 위치를
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-7-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;msub&gt;&lt;mi&gt;P&lt;/mi&gt;&lt;mi&gt;v&lt;/mi&gt;&lt;/msub&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-36" style="width: 1.342em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 1.044em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.59em, 1001.04em, 2.731em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-37"
                              ><span class="msubsup" id="MathJax-Span-38"
                                ><span style="display: inline-block; position: relative; width: 1.044em; height: 0px"
                                  ><span
                                    style="
                                      position: absolute;
                                      clip: rect(3.177em, 1000.75em, 4.169em, -999.998em);
                                      top: -4.015em;
                                      left: 0em;
                                    "
                                    ><span class="mi" id="MathJax-Span-39" style="font-family: MathJax_Math-italic"
                                      >P<span
                                        style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                      ></span></span
                                    ><span style="display: inline-block; width: 0px; height: 4.02em"></span></span
                                  ><span style="position: absolute; top: -3.867em; left: 0.647em"
                                    ><span
                                      class="mi"
                                      id="MathJax-Span-40"
                                      style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                      >v</span
                                    ><span
                                      style="display: inline-block; width: 0px; height: 4.02em"
                                    ></span></span></span></span></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.247em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.191em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"
                        ><msub><mi>P</mi><mi>v</mi></msub></math
                      ></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-7">
                    P_v
                  </script></span
                >로 나타내면 두 정점
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-8-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;u&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-41" style="width: 0.747em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 0.598em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.838em, 1000.6em, 2.582em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-42"
                              ><span class="mi" id="MathJax-Span-43" style="font-family: MathJax_Math-italic"
                                >u</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.059em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 0.691em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>u</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-8">
                    u
                  </script></span
                >와
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-9-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;v&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-44" style="width: 0.647em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 0.499em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.838em, 1000.5em, 2.582em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-45"
                              ><span class="mi" id="MathJax-Span-46" style="font-family: MathJax_Math-italic"
                                >v</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.059em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 0.691em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>v</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-9">
                    v
                  </script></span
                >를 잇는 간선의 거리는
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-10-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mrow class="MJX-TeXAtom-ORD"&gt;&lt;mo stretchy="false"&gt;|&lt;/mo&gt;&lt;/mrow&gt;&lt;msub&gt;&lt;mi&gt;P&lt;/mi&gt;&lt;mi&gt;u&lt;/mi&gt;&lt;/msub&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;P&lt;/mi&gt;&lt;mi&gt;v&lt;/mi&gt;&lt;/msub&gt;&lt;mrow class="MJX-TeXAtom-ORD"&gt;&lt;mo stretchy="false"&gt;|&lt;/mo&gt;&lt;/mrow&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-47" style="width: 4.963em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 3.921em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.54em, 1003.82em, 2.83em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-48"
                              ><span class="texatom" id="MathJax-Span-49"
                                ><span class="mrow" id="MathJax-Span-50"
                                  ><span class="mo" id="MathJax-Span-51" style="font-family: MathJax_Main"
                                    >|</span
                                  ></span
                                ></span
                              ><span class="msubsup" id="MathJax-Span-52"
                                ><span style="display: inline-block; position: relative; width: 1.143em; height: 0px"
                                  ><span
                                    style="
                                      position: absolute;
                                      clip: rect(3.177em, 1000.75em, 4.169em, -999.998em);
                                      top: -4.015em;
                                      left: 0em;
                                    "
                                    ><span class="mi" id="MathJax-Span-53" style="font-family: MathJax_Math-italic"
                                      >P<span
                                        style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                      ></span></span
                                    ><span style="display: inline-block; width: 0px; height: 4.02em"></span></span
                                  ><span style="position: absolute; top: -3.867em; left: 0.647em"
                                    ><span
                                      class="mi"
                                      id="MathJax-Span-54"
                                      style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                      >u</span
                                    ><span
                                      style="display: inline-block; width: 0px; height: 4.02em"
                                    ></span></span></span></span
                              ><span
                                class="mo"
                                id="MathJax-Span-55"
                                style="font-family: MathJax_Main; padding-left: 0.201em"
                                >−</span
                              ><span class="msubsup" id="MathJax-Span-56" style="padding-left: 0.201em"
                                ><span style="display: inline-block; position: relative; width: 1.044em; height: 0px"
                                  ><span
                                    style="
                                      position: absolute;
                                      clip: rect(3.177em, 1000.75em, 4.169em, -999.998em);
                                      top: -4.015em;
                                      left: 0em;
                                    "
                                    ><span class="mi" id="MathJax-Span-57" style="font-family: MathJax_Math-italic"
                                      >P<span
                                        style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                      ></span></span
                                    ><span style="display: inline-block; width: 0px; height: 4.02em"></span></span
                                  ><span style="position: absolute; top: -3.867em; left: 0.647em"
                                    ><span
                                      class="mi"
                                      id="MathJax-Span-58"
                                      style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                      >v</span
                                    ><span
                                      style="display: inline-block; width: 0px; height: 4.02em"
                                    ></span></span></span></span
                              ><span class="texatom" id="MathJax-Span-59"
                                ><span class="mrow" id="MathJax-Span-60"
                                  ><span class="mo" id="MathJax-Span-61" style="font-family: MathJax_Main"
                                    >|</span
                                  ></span
                                ></span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.372em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.378em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"
                        ><mrow class="MJX-TeXAtom-ORD"><mo stretchy="false">|</mo></mrow
                        ><msub><mi>P</mi><mi>u</mi></msub
                        ><mo>−</mo><msub><mi>P</mi><mi>v</mi></msub
                        ><mrow class="MJX-TeXAtom-ORD"><mo stretchy="false">|</mo></mrow></math
                      ></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-10">
                    |P_u - P_v |
                  </script></span
                >가 된다.<br />
                <br />
                그래프
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-11-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;G&lt;/mi&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mi&gt;V&lt;/mi&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mi&gt;E&lt;/mi&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-62" style="width: 6.252em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 4.963em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.54em, 1004.86em, 2.83em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-63"
                              ><span class="mi" id="MathJax-Span-64" style="font-family: MathJax_Math-italic">G</span
                              ><span
                                class="mo"
                                id="MathJax-Span-65"
                                style="font-family: MathJax_Main; padding-left: 0.3em"
                                >=</span
                              ><span
                                class="mo"
                                id="MathJax-Span-66"
                                style="font-family: MathJax_Main; padding-left: 0.3em"
                                >(</span
                              ><span class="mi" id="MathJax-Span-67" style="font-family: MathJax_Math-italic"
                                >V<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.201em"
                                ></span></span
                              ><span class="mo" id="MathJax-Span-68" style="font-family: MathJax_Main">,</span
                              ><span
                                class="mi"
                                id="MathJax-Span-69"
                                style="font-family: MathJax_Math-italic; padding-left: 0.151em"
                                >E<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.052em"
                                ></span></span
                              ><span class="mo" id="MathJax-Span-70" style="font-family: MathJax_Main">)</span></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.372em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.378em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"
                        ><mi>G</mi><mo>=</mo><mo stretchy="false">(</mo><mi>V</mi><mo>,</mo><mi>E</mi
                        ><mo stretchy="false">)</mo></math
                      ></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-11">
                    G=(V,E)
                  </script></span
                >가 주어질 때,
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-12-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;E&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-71" style="width: 0.995em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 0.796em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.59em, 1000.8em, 2.582em, -999.998em);
                              top: -2.428em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-72"
                              ><span class="mi" id="MathJax-Span-73" style="font-family: MathJax_Math-italic"
                                >E<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.052em"
                                ></span></span></span
                            ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.059em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.003em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>E</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-12">
                    E
                  </script></span
                >에 속한 모든 간선의 길이 합이 가능한 최소가 되도록 정점을 선형 배치하는 프로그램을 작성하고자 한다.<br />
                <br />
                예를 들어, &lt;그림 1&gt;에서 보인 것과 같은 그래프를 &lt;그림 2&gt;에서 보인 것처럼 배치하면 간선의
                길이 합이 16이 되고, &lt;그림 3&gt;에서 보인 것처럼 배치하면 간선의 길이 합은 14가 된다.</span
              ><br />
              <br />
              <br />
              <img
                height="135"
                src="https://cdn.codeground.org/resources/94facac0ce/AWQnG9QXAK9vpRkY.png"
                width="213"
              />&nbsp;&nbsp;<img
                height="123"
                src="https://cdn.codeground.org/resources/94facac0ce/AWQnG-bXALJvpRkY.png"
                width="613"
              /><br />
              <br />
              <br />
              - 제한시간: 전체 테스트 케이스는 30개 이하이며, 전체 수행 시간은 4초 이내. (Java 8초 이내)&nbsp;<br />
              <br />
              &nbsp; 제한 시간을 초과하면 제출한 소스코드의 프로그램이 즉시 종료되며,<br />
              &nbsp; 테스트 케이스를 1개 그룹 이상 통과하였다면 '부분 점수(0&lt; 점수&lt; 만점)'를 받을 수 있습니다.<br />
              &nbsp; 단, 사용한 출력 함수에 따라서 테스트 케이스를 1개 그룹 이상 통과하였더라도 점수는 0점이 될 수
              있습니다.<br />
              &nbsp; 부분 점수를 제대로 받기 위해서는, C / C++ 에서 "printf 함수" 사용할 경우, 프로그램 시작부분에서
              "setbuf(stdout, NULL);"를 한번만 사용하십시오.<br />
              &nbsp; C++에서는 "setbuf(stdout, NULL);"와 "printf 함수" 대신 "cout"를 사용하고, Java에서는
              "System.out.printIn"을 사용하십시오.<br />
              &nbsp; &nbsp;※ 언어별 기본 제공 소스코드 내용 참고<br />
              &nbsp; 만약, 제한 시간을 초과하지 않았는데도 '부분 점수'를 받았다면, 일부 테스트 케이스를 통과하지 못한
              경우 입니다.<br />
              <br />
              - 메모리 사용 제한 : heap, global, static 총계 256MB, stack 1MB<br />
              <br />
              - 제출 제한 : 최대 10회 (제출 횟수를 반영하여 순위 결정 → 동점자의 경우 제출 횟수가 적은 사람에게 높은
              순위 부여)
            </p>
          </div>
          <div class="textBox1" style="margin-bottom: 20px">
            <div class="inputWrap">
              <h3><span>메모리 사용 제한</span></h3>
              <div class="innerWrap">
                <big>heap, global, static (총계) : 256MB <br />stack : 1MB</big>
              </div>
            </div>
          </div>

          <div class="textBox1">
            <div class="inputWrap">
              <h3><span>입력</span></h3>
              <div class="innerWrap">
                <span style="font-size: 16px"
                  >입력 파일에는 여러 테스트 케이스가 포함될 수 있다.<br />
                  파일의 첫째 줄에 테스트 케이스의 개수를 나타내는 자연수
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-13-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;T&lt;/mi&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-74" style="width: 0.895em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 0.697em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.59em, 1000.7em, 2.582em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-75"
                                ><span class="mi" id="MathJax-Span-76" style="font-family: MathJax_Math-italic"
                                  >T<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.059em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.003em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>T</mi></math></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-13">
                      T
                    </script></span
                  >가 주어지고, 이후 차례로 &nbsp;<span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-14-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;T&lt;/mi&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-77" style="width: 0.895em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 0.697em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.59em, 1000.7em, 2.582em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-78"
                                ><span class="mi" id="MathJax-Span-79" style="font-family: MathJax_Math-italic"
                                  >T<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.059em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.003em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>T</mi></math></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-14">
                      T
                    </script></span
                  >개의 테스트 케이스가 주어진다.
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-15-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;T&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mn&gt;30&lt;/mn&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-80" style="width: 7.195em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 5.707em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.54em, 1005.61em, 2.83em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-81"
                                ><span class="mo" id="MathJax-Span-82" style="font-family: MathJax_Main">(</span
                                ><span class="mn" id="MathJax-Span-83" style="font-family: MathJax_Main">1</span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-84"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-85"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                  >T<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-86"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mn"
                                  id="MathJax-Span-87"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >30</span
                                ><span class="mo" id="MathJax-Span-88" style="font-family: MathJax_Main">)</span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.372em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.378em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"
                          ><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><mi>T</mi><mo>≤</mo><mn>30</mn
                          ><mo stretchy="false">)</mo></math
                        ></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-15">
                      (1 ≤ T ≤ 30)
                    </script></span
                  ><br />
                  <br />
                  각 테스트 케이스의 첫 줄에는 두 개의 정수<span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-16-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;5&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mn&gt;100&lt;/mn&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-89" style="width: 9.278em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 7.344em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.54em, 1007.25em, 2.83em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-90"
                                ><span class="mi" id="MathJax-Span-91" style="font-family: MathJax_Math-italic"
                                  >N<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span
                                ><span class="mo" id="MathJax-Span-92" style="font-family: MathJax_Main">(</span
                                ><span class="mn" id="MathJax-Span-93" style="font-family: MathJax_Main">5</span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-94"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-95"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                  >N<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-96"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mn"
                                  id="MathJax-Span-97"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >100</span
                                ><span class="mo" id="MathJax-Span-98" style="font-family: MathJax_Main">)</span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.372em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.378em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"
                          ><mi>N</mi><mo stretchy="false">(</mo><mn>5</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>100</mn
                          ><mo stretchy="false">)</mo></math
                        ></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-16">
                      N (5≤N≤100)
                    </script></span
                  >과
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-17-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;M&lt;/mi&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;4&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;M&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mn&gt;000&lt;/mn&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-99" style="width: 10.915em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 8.633em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.54em, 1008.53em, 2.83em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-100"
                                ><span class="mi" id="MathJax-Span-101" style="font-family: MathJax_Math-italic"
                                  >M<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span
                                ><span class="mo" id="MathJax-Span-102" style="font-family: MathJax_Main">(</span
                                ><span class="mn" id="MathJax-Span-103" style="font-family: MathJax_Main">4</span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-104"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-105"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                  >M<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-106"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mn"
                                  id="MathJax-Span-107"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >1</span
                                ><span class="mo" id="MathJax-Span-108" style="font-family: MathJax_Main">,</span
                                ><span
                                  class="mn"
                                  id="MathJax-Span-109"
                                  style="font-family: MathJax_Main; padding-left: 0.151em"
                                  >000</span
                                ><span class="mo" id="MathJax-Span-110" style="font-family: MathJax_Main">)</span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.372em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.378em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"
                          ><mi>M</mi><mo stretchy="false">(</mo><mn>4</mn><mo>≤</mo><mi>M</mi><mo>≤</mo><mn>1</mn
                          ><mo>,</mo><mn>000</mn><mo stretchy="false">)</mo></math
                        ></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-17">
                      M (4≤M≤1,000)
                    </script></span
                  >이 순서대로 주어지며 각각은 입력 그래프의 정점의 개수와 간선의 개수를 의미한다.&nbsp;<br />
                  다음 이어지는
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-18-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;M&lt;/mi&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-111" style="width: 1.391em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 1.094em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.59em, 1001.09em, 2.582em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-112"
                                ><span class="mi" id="MathJax-Span-113" style="font-family: MathJax_Math-italic"
                                  >M<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.059em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.003em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-18">
                      M
                    </script></span
                  >개의 줄 각각에는 두 개의 정수
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-19-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;u&lt;/mi&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mi&gt;v&lt;/mi&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;0&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;u&lt;/mi&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mi&gt;v&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-114" style="width: 12.056em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 9.576em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.54em, 1009.48em, 2.83em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-115"
                                ><span class="mi" id="MathJax-Span-116" style="font-family: MathJax_Math-italic">u</span
                                ><span class="mo" id="MathJax-Span-117" style="font-family: MathJax_Main">,</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-118"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.151em"
                                  >v</span
                                ><span class="mo" id="MathJax-Span-119" style="font-family: MathJax_Main">(</span
                                ><span class="mn" id="MathJax-Span-120" style="font-family: MathJax_Main">0</span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-121"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-122"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                  >u</span
                                ><span class="mo" id="MathJax-Span-123" style="font-family: MathJax_Main">,</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-124"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.151em"
                                  >v</span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-125"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-126"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                  >N<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-127"
                                  style="font-family: MathJax_Main; padding-left: 0.201em"
                                  >−</span
                                ><span
                                  class="mn"
                                  id="MathJax-Span-128"
                                  style="font-family: MathJax_Main; padding-left: 0.201em"
                                  >1</span
                                ><span class="mo" id="MathJax-Span-129" style="font-family: MathJax_Main">)</span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.372em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.378em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"
                          ><mi>u</mi><mo>,</mo><mi>v</mi><mo stretchy="false">(</mo><mn>0</mn><mo>≤</mo><mi>u</mi
                          ><mo>,</mo><mi>v</mi><mo>≤</mo><mi>N</mi><mo>−</mo><mn>1</mn><mo stretchy="false">)</mo></math
                        ></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-19">
                      u,v (0≤u,v≤N-1)
                    </script></span
                  >
                  가 주어지는데, 각 간선의 양 끝에 있는 정점의 번호를 나타낸다.<br />
                  입력으로 주어지는 그래프는 다음과 같은 규칙으로 생성된다.<br />
                  <br />
                  ①
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-20-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-130" style="width: 1.143em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 0.895em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.59em, 1000.89em, 2.582em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-131"
                                ><span class="mi" id="MathJax-Span-132" style="font-family: MathJax_Math-italic"
                                  >N<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.059em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.003em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-20">
                      N
                    </script></span
                  >개의 정점을 무작위 순서로 일렬로 나열한 후, 인접한 정점사이엔 간선을 추가한다.<br />
                  ② 거리차이가
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-21-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-133" style="width: 4.715em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 3.723em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.54em, 1003.62em, 2.83em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-134"
                                ><span class="mi" id="MathJax-Span-135" style="font-family: MathJax_Math-italic">k</span
                                ><span class="mo" id="MathJax-Span-136" style="font-family: MathJax_Main">(</span
                                ><span class="mn" id="MathJax-Span-137" style="font-family: MathJax_Main">2</span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-138"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-139"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                  >k</span
                                ><span class="mo" id="MathJax-Span-140" style="font-family: MathJax_Main">)</span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.372em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.378em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"
                          ><mi>k</mi><mo stretchy="false">(</mo><mn>2</mn><mo>≤</mo><mi>k</mi
                          ><mo stretchy="false">)</mo></math
                        ></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-21">
                      k (2≤k)
                    </script></span
                  >인 두 정점사이엔
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-22-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;msup&gt;&lt;mn&gt;0.8&lt;/mn&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;/msup&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-141" style="width: 2.185em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 1.739em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.391em, 1001.74em, 2.582em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-142"
                                ><span class="msubsup" id="MathJax-Span-143"
                                  ><span style="display: inline-block; position: relative; width: 1.739em; height: 0px"
                                    ><span
                                      style="
                                        position: absolute;
                                        clip: rect(3.227em, 1001.24em, 4.169em, -999.998em);
                                        top: -4.015em;
                                        left: 0em;
                                      "
                                      ><span class="mn" id="MathJax-Span-144" style="font-family: MathJax_Main"
                                        >0.8</span
                                      ><span style="display: inline-block; width: 0px; height: 4.02em"></span></span
                                    ><span style="position: absolute; top: -4.412em; left: 1.292em"
                                      ><span
                                        class="mi"
                                        id="MathJax-Span-145"
                                        style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                        >k</span
                                      ><span
                                        style="display: inline-block; width: 0px; height: 4.02em"
                                      ></span></span></span></span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.059em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.253em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"
                          ><msup><mn>0.8</mn><mi>k</mi></msup></math
                        ></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-22">
                      0.8^k
                    </script></span
                  >의 확률로 간선이 추가된다.&nbsp;</span
                ><br />
                <br />
                <br />
                - 점수 : 최대 10회 제출하여 취득한 각각의 점수 중에서 최대 점수 (만점 200 점)<br />
                <br />
                &nbsp; &nbsp;주어지는 테스트 케이스 데이터들의 그룹은 아래와 같다.<br />
                ㆍ 그룹 1 (40 점) : 이 그룹의 테스트 케이스에서는 N&lt;9이다.<br />
                ㆍ 그룹 2 (160 점) : 이 그룹의 테스트 케이스에서는 별도의 제한이 없다.<br />
                <br />
                - 참고 : 이 문제는 기본적으로 최적의 해를 찾기 보다 상대적으로 좋은 결과를 찾는 문제이다.<br />
                단, 그룹 1의 경우
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-23-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-146" style="width: 1.08em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 0.853em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.647em, 1000.85em, 2.667em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-147"
                              ><span class="mi" id="MathJax-Span-148" style="font-family: MathJax_Math-italic"
                                >N<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.06em"
                                ></span></span></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.068em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.004em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-23">
                    N
                  </script></span
                >이 작기 때문에 최적의 해를 구할 수 있고, 따라서 그룹 1의 모든 테스트 케이스에 대해 최적해를 구해야 그룹
                1에 할당된 부분점수를 받을 수 있다.&nbsp;<br />
                그룹 2의 테스트케이스에 대해선, 출제진이 가지고 있는 결과값
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-24-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;R&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-149" style="width: 0.967em; display: inline-block"
                        ><span
                          style="display: inline-block; position: relative; width: 0.74em; height: 0px; font-size: 126%"
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.647em, 1000.74em, 2.667em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-150"
                              ><span class="mi" id="MathJax-Span-151" style="font-family: MathJax_Math-italic"
                                >R</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.068em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.004em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>R</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-24">
                    R
                  </script></span
                >보다 동등하거나 좋은 결과를 생성하면 해당그룹에 할당된 만점을 받고, 그렇지 않으면
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-25-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;R&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-152" style="width: 0.967em; display: inline-block"
                        ><span
                          style="display: inline-block; position: relative; width: 0.74em; height: 0px; font-size: 126%"
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.647em, 1000.74em, 2.667em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-153"
                              ><span class="mi" id="MathJax-Span-154" style="font-family: MathJax_Math-italic"
                                >R</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.068em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.004em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>R</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-25">
                    R
                  </script></span
                >보다 나빠진 정도에 반비례하여 부분점수를 받을 것이다.<br />
                구체적으로, 여러분이 구한 결과를
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-26-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;L&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-155" style="width: 0.853em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 0.683em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.647em, 1000.63em, 2.667em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-156"
                              ><span class="mi" id="MathJax-Span-157" style="font-family: MathJax_Math-italic"
                                >L</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.068em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.004em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-26">
                    L
                  </script></span
                >, 각 테스트케이스에 할당된 만점을
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-27-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;P&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-158" style="width: 0.967em; display: inline-block"
                        ><span
                          style="display: inline-block; position: relative; width: 0.74em; height: 0px; font-size: 126%"
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.647em, 1000.74em, 2.667em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-159"
                              ><span class="mi" id="MathJax-Span-160" style="font-family: MathJax_Math-italic"
                                >P<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.116em"
                                ></span></span></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.068em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.004em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>P</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-27">
                    P
                  </script></span
                >라 두자.<br />
                만약,
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-28-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;L&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;R&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-161" style="width: 3.518em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 2.781em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.647em, 1002.78em, 2.781em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-162"
                              ><span class="mi" id="MathJax-Span-163" style="font-family: MathJax_Math-italic">L</span
                              ><span
                                class="mo"
                                id="MathJax-Span-164"
                                style="font-family: MathJax_Main; padding-left: 0.286em"
                                >≤</span
                              ><span
                                class="mi"
                                id="MathJax-Span-165"
                                style="font-family: MathJax_Math-italic; padding-left: 0.286em"
                                >R</span
                              ></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.211em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.146em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi><mo>≤</mo><mi>R</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-28">
                    L≤R
                  </script></span
                >이면
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-29-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;P&lt;/mi&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-166" style="width: 0.967em; display: inline-block"
                        ><span
                          style="display: inline-block; position: relative; width: 0.74em; height: 0px; font-size: 126%"
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.647em, 1000.74em, 2.667em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-167"
                              ><span class="mi" id="MathJax-Span-168" style="font-family: MathJax_Math-italic"
                                >P<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.116em"
                                ></span></span></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.068em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 1.004em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>P</mi></math></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-29">
                    P
                  </script></span
                >
                점을 받고, 그렇지 않으면
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-30-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;P&lt;/mi&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mrow class="MJX-TeXAtom-ORD"&gt;&lt;mfrac&gt;&lt;mrow&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mi&gt;L&lt;/mi&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mi&gt;R&lt;/mi&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/mrow&gt;&lt;mrow&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;mi&gt;R&lt;/mi&gt;&lt;/mrow&gt;&lt;/mfrac&gt;&lt;/mrow&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-169" style="width: 7.259em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 5.728em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.193em, 1005.62em, 3.064em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-170"
                              ><span class="mi" id="MathJax-Span-171" style="font-family: MathJax_Math-italic"
                                >P<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.116em"
                                ></span></span
                              ><span class="mo" id="MathJax-Span-172" style="font-family: MathJax_Main">(</span
                              ><span class="mn" id="MathJax-Span-173" style="font-family: MathJax_Main">1</span
                              ><span
                                class="mo"
                                id="MathJax-Span-174"
                                style="font-family: MathJax_Main; padding-left: 0.23em"
                                >−</span
                              ><span class="texatom" id="MathJax-Span-175" style="padding-left: 0.23em"
                                ><span class="mrow" id="MathJax-Span-176"
                                  ><span class="mfrac" id="MathJax-Span-177"
                                    ><span
                                      style="
                                        display: inline-block;
                                        position: relative;
                                        width: 2.214em;
                                        height: 0px;
                                        margin-right: 0.116em;
                                        margin-left: 0.116em;
                                      "
                                      ><span
                                        style="
                                          position: absolute;
                                          clip: rect(3.348em, 1002.04em, 4.368em, -999.997em);
                                          top: -4.589em;
                                          left: 50%;
                                          margin-left: -1.074em;
                                        "
                                        ><span class="mrow" id="MathJax-Span-178"
                                          ><span
                                            class="mo"
                                            id="MathJax-Span-179"
                                            style="font-size: 70.7%; font-family: MathJax_Main"
                                            >(</span
                                          ><span
                                            class="mi"
                                            id="MathJax-Span-180"
                                            style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                            >L</span
                                          ><span
                                            class="mo"
                                            id="MathJax-Span-181"
                                            style="font-size: 70.7%; font-family: MathJax_Main"
                                            >−</span
                                          ><span
                                            class="mi"
                                            id="MathJax-Span-182"
                                            style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                            >R</span
                                          ><span
                                            class="mo"
                                            id="MathJax-Span-183"
                                            style="font-size: 70.7%; font-family: MathJax_Main"
                                            >)</span
                                          ></span
                                        ><span style="display: inline-block; width: 0px; height: 4.028em"></span></span
                                      ><span
                                        style="
                                          position: absolute;
                                          clip: rect(3.348em, 1000.91em, 4.198em, -999.997em);
                                          top: -3.625em;
                                          left: 50%;
                                          margin-left: -0.451em;
                                        "
                                        ><span class="mrow" id="MathJax-Span-184"
                                          ><span
                                            class="mn"
                                            id="MathJax-Span-185"
                                            style="font-size: 70.7%; font-family: MathJax_Main"
                                            >2</span
                                          ><span
                                            class="mi"
                                            id="MathJax-Span-186"
                                            style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                            >R</span
                                          ></span
                                        ><span style="display: inline-block; width: 0px; height: 4.028em"></span></span
                                      ><span
                                        style="
                                          position: absolute;
                                          clip: rect(0.853em, 1002.21em, 1.25em, -999.997em);
                                          top: -1.301em;
                                          left: 0em;
                                        "
                                        ><span
                                          style="
                                            display: inline-block;
                                            overflow: hidden;
                                            vertical-align: 0em;
                                            border-top: 1.3px solid;
                                            width: 2.214em;
                                            height: 0px;
                                          "
                                        ></span
                                        ><span
                                          style="display: inline-block; width: 0px; height: 1.08em"
                                        ></span></span></span></span></span></span
                              ><span class="mo" id="MathJax-Span-187" style="font-family: MathJax_Main">)</span></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.568em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 2.075em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"
                        ><mi>P</mi><mo stretchy="false">(</mo><mn>1</mn><mo>−</mo
                        ><mrow class="MJX-TeXAtom-ORD"
                          ><mfrac
                            ><mrow
                              ><mo stretchy="false">(</mo><mi>L</mi><mo>−</mo><mi>R</mi
                              ><mo stretchy="false">)</mo></mrow
                            ><mrow><mn>2</mn><mi>R</mi></mrow></mfrac
                          ></mrow
                        ><mo stretchy="false">)</mo></math
                      ></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-30">
                    P(1- { (L-R) \over 2R})
                  </script></span
                >점을 받을 것이다.<br />
                만약
                <span class="math-tex"
                  ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                  ><span
                    class="MathJax"
                    id="MathJax-Element-31-Frame"
                    tabindex="0"
                    style="position: relative"
                    data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;P&lt;/mi&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mrow class="MJX-TeXAtom-ORD"&gt;&lt;mfrac&gt;&lt;mrow&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mi&gt;L&lt;/mi&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mi&gt;R&lt;/mi&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/mrow&gt;&lt;mrow&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;mi&gt;R&lt;/mi&gt;&lt;/mrow&gt;&lt;/mfrac&gt;&lt;/mrow&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                    role="presentation"
                    ><nobr aria-hidden="true"
                      ><span class="math" id="MathJax-Span-188" style="width: 7.259em; display: inline-block"
                        ><span
                          style="
                            display: inline-block;
                            position: relative;
                            width: 5.728em;
                            height: 0px;
                            font-size: 126%;
                          "
                          ><span
                            style="
                              position: absolute;
                              clip: rect(1.193em, 1005.62em, 3.064em, -999.997em);
                              top: -2.491em;
                              left: 0em;
                            "
                            ><span class="mrow" id="MathJax-Span-189"
                              ><span class="mi" id="MathJax-Span-190" style="font-family: MathJax_Math-italic"
                                >P<span
                                  style="display: inline-block; overflow: hidden; height: 1px; width: 0.116em"
                                ></span></span
                              ><span class="mo" id="MathJax-Span-191" style="font-family: MathJax_Main">(</span
                              ><span class="mn" id="MathJax-Span-192" style="font-family: MathJax_Main">1</span
                              ><span
                                class="mo"
                                id="MathJax-Span-193"
                                style="font-family: MathJax_Main; padding-left: 0.23em"
                                >-</span
                              ><span class="texatom" id="MathJax-Span-194" style="padding-left: 0.23em"
                                ><span class="mrow" id="MathJax-Span-195"
                                  ><span class="mfrac" id="MathJax-Span-196"
                                    ><span
                                      style="
                                        display: inline-block;
                                        position: relative;
                                        width: 2.214em;
                                        height: 0px;
                                        margin-right: 0.116em;
                                        margin-left: 0.116em;
                                      "
                                      ><span
                                        style="
                                          position: absolute;
                                          clip: rect(3.348em, 1002.04em, 4.368em, -999.997em);
                                          top: -4.589em;
                                          left: 50%;
                                          margin-left: -1.074em;
                                        "
                                        ><span class="mrow" id="MathJax-Span-197"
                                          ><span
                                            class="mo"
                                            id="MathJax-Span-198"
                                            style="font-size: 70.7%; font-family: MathJax_Main"
                                            >(</span
                                          ><span
                                            class="mi"
                                            id="MathJax-Span-199"
                                            style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                            >L</span
                                          ><span
                                            class="mo"
                                            id="MathJax-Span-200"
                                            style="font-size: 70.7%; font-family: MathJax_Main"
                                            >−</span
                                          ><span
                                            class="mi"
                                            id="MathJax-Span-201"
                                            style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                            >R</span
                                          ><span
                                            class="mo"
                                            id="MathJax-Span-202"
                                            style="font-size: 70.7%; font-family: MathJax_Main"
                                            >)</span
                                          ></span
                                        ><span style="display: inline-block; width: 0px; height: 4.028em"></span></span
                                      ><span
                                        style="
                                          position: absolute;
                                          clip: rect(3.348em, 1000.91em, 4.198em, -999.997em);
                                          top: -3.625em;
                                          left: 50%;
                                          margin-left: -0.451em;
                                        "
                                        ><span class="mrow" id="MathJax-Span-203"
                                          ><span
                                            class="mn"
                                            id="MathJax-Span-204"
                                            style="font-size: 70.7%; font-family: MathJax_Main"
                                            >2</span
                                          ><span
                                            class="mi"
                                            id="MathJax-Span-205"
                                            style="font-size: 70.7%; font-family: MathJax_Math-italic"
                                            >R</span
                                          ></span
                                        ><span style="display: inline-block; width: 0px; height: 4.028em"></span></span
                                      ><span
                                        style="
                                          position: absolute;
                                          clip: rect(0.853em, 1002.21em, 1.25em, -999.997em);
                                          top: -1.301em;
                                          left: 0em;
                                        "
                                        ><span
                                          style="
                                            display: inline-block;
                                            overflow: hidden;
                                            vertical-align: 0em;
                                            border-top: 1.3px solid;
                                            width: 2.214em;
                                            height: 0px;
                                          "
                                        ></span
                                        ><span
                                          style="display: inline-block; width: 0px; height: 1.08em"
                                        ></span></span></span></span></span></span
                              ><span class="mo" id="MathJax-Span-206" style="font-family: MathJax_Main">)</span></span
                            ><span style="display: inline-block; width: 0px; height: 2.497em"></span></span></span
                        ><span
                          style="
                            display: inline-block;
                            overflow: hidden;
                            vertical-align: -0.568em;
                            border-left: 0px solid;
                            width: 0px;
                            height: 2.075em;
                          "
                        ></span></span></nobr
                    ><span class="MJX_Assistive_MathML" role="presentation"
                      ><math xmlns="http://www.w3.org/1998/Math/MathML"
                        ><mi>P</mi><mo stretchy="false">(</mo><mn>1</mn><mo>−</mo
                        ><mrow class="MJX-TeXAtom-ORD"
                          ><mfrac
                            ><mrow
                              ><mo stretchy="false">(</mo><mi>L</mi><mo>−</mo><mi>R</mi
                              ><mo stretchy="false">)</mo></mrow
                            ><mrow><mn>2</mn><mi>R</mi></mrow></mfrac
                          ></mrow
                        ><mo stretchy="false">)</mo></math
                      ></span
                    ></span
                  >
                  <script type="math/tex" id="MathJax-Element-31">
                    P(1- { (L-R) \over 2R})
                  </script></span
                >이 음수이면 0점으로 처리된다. 각 테스트 케이스에 대해 구한 점수의 합이 그룹 2에 대한 점수가 된다.<br />
                &nbsp;
              </div>
            </div>
            <div class="outWrap">
              <h3><span>출력</span></h3>
              <div class="innerWrap">
                <span style="font-size: 16px"
                  >각 테스트 케이스의 답을 순서대로 표준출력으로 출력하여야 하며,<br />
                  각 테스트 케이스마다 첫 줄에는 “Case #C”를 출력하여야 한다. 이때 C는 테스트 케이스의 번호이다.<br />
                  그 다음 줄에 모든 간선의 길이 합을 출력하시오.<br />
                  그 다음 줄엔 각
                  <span class="math-tex"
                    ><span class="MathJax_Preview" style="color: inherit; display: none"></span
                    ><span
                      class="MathJax"
                      id="MathJax-Element-32-Frame"
                      tabindex="0"
                      style="position: relative"
                      data-mathml='&lt;math xmlns="http://www.w3.org/1998/Math/MathML"&gt;&lt;mi&gt;x&lt;/mi&gt;&lt;mo stretchy="false"&gt;(&lt;/mo&gt;&lt;mn&gt;0&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;x&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;N&lt;/mi&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo stretchy="false"&gt;)&lt;/mo&gt;&lt;/math&gt;'
                      role="presentation"
                      ><nobr aria-hidden="true"
                        ><span class="math" id="MathJax-Span-207" style="width: 9.824em; display: inline-block"
                          ><span
                            style="
                              display: inline-block;
                              position: relative;
                              width: 7.79em;
                              height: 0px;
                              font-size: 126%;
                            "
                            ><span
                              style="
                                position: absolute;
                                clip: rect(1.54em, 1007.69em, 2.83em, -999.998em);
                                top: -2.428em;
                                left: 0em;
                              "
                              ><span class="mrow" id="MathJax-Span-208"
                                ><span class="mi" id="MathJax-Span-209" style="font-family: MathJax_Math-italic">x</span
                                ><span class="mo" id="MathJax-Span-210" style="font-family: MathJax_Main">(</span
                                ><span class="mn" id="MathJax-Span-211" style="font-family: MathJax_Main">0</span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-212"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-213"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                  >x</span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-214"
                                  style="font-family: MathJax_Main; padding-left: 0.3em"
                                  >≤</span
                                ><span
                                  class="mi"
                                  id="MathJax-Span-215"
                                  style="font-family: MathJax_Math-italic; padding-left: 0.3em"
                                  >N<span
                                    style="display: inline-block; overflow: hidden; height: 1px; width: 0.102em"
                                  ></span></span
                                ><span
                                  class="mo"
                                  id="MathJax-Span-216"
                                  style="font-family: MathJax_Main; padding-left: 0.201em"
                                  >−</span
                                ><span
                                  class="mn"
                                  id="MathJax-Span-217"
                                  style="font-family: MathJax_Main; padding-left: 0.201em"
                                  >1</span
                                ><span class="mo" id="MathJax-Span-218" style="font-family: MathJax_Main">)</span></span
                              ><span style="display: inline-block; width: 0px; height: 2.433em"></span></span></span
                          ><span
                            style="
                              display: inline-block;
                              overflow: hidden;
                              vertical-align: -0.372em;
                              border-left: 0px solid;
                              width: 0px;
                              height: 1.378em;
                            "
                          ></span></span></nobr
                      ><span class="MJX_Assistive_MathML" role="presentation"
                        ><math xmlns="http://www.w3.org/1998/Math/MathML"
                          ><mi>x</mi><mo stretchy="false">(</mo><mn>0</mn><mo>≤</mo><mi>x</mi><mo>≤</mo><mi>N</mi
                          ><mo>−</mo><mn>1</mn><mo stretchy="false">)</mo></math
                        ></span
                      ></span
                    >
                    <script type="math/tex" id="MathJax-Element-32">
                      x(0≤x≤N-1)
                    </script></span
                  >
                  좌표에 배치된 정점의 번호를 차례대로 출력하시오.</span
                >
              </div>
            </div>
            <div class="exWrpa">
              <h3><span>입출력예</span></h3>
              <div class="innerWrap">
                <table class="tbl1 w100 thc tdl">
                  <thead>
                    <tr>
                      <th>입력</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td>
                        <pre>
2
6 7
1 2
2 4
4 0
5 0
3 0
5 3
1 3
6 9
0 1
1 2
2 5
1 5
1 4
1 3
0 3
3 4
4 5</pre
                        >
                      </td>
                    </tr>
                  </tbody>
                  <thead>
                    <tr>
                      <th>출력</th>
                    </tr>
                  </thead>
                  <tbody>
                    <tr>
                      <td>
                        <pre>
Case #1
11
1 2 4 0 3 5
Case #2
14
0 3 1 4 5 2</pre
                        >
                      </td>
                    </tr>
                  </tbody>
                </table>
              </div>
            </div>
          </div>
          <dl class="textBox2">
            <ul>
              <dt>출처</dt>
              <dd></dd>
            </ul>
            <ul>
              <dt>등록자</dt>
              <dd></dd>
            </ul>
          </dl>
        </div>
      </div>
      <div class="ui-resizable-handle ui-resizable-e" style="z-index: 90"></div>
      <div class="ui-resizable-handle ui-resizable-s" style="z-index: 90; display: block"></div>
      <div
        class="ui-resizable-handle ui-resizable-se ui-icon ui-icon-gripsmall-diagonal-se"
        style="z-index: 90; display: block"
      ></div>
    </div>
  </body>
</html>
