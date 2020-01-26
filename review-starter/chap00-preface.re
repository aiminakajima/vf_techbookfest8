= まえがき

//centering{
＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊ @<strong>{注意} ＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊
//}

このドキュメントは、Re:VIEWのサンプル原稿を兼ねています。
自分の原稿を書くときは、サンプルの原稿ファイルと画像ファイルを消してください。

本文での、1行あたりの文字数の確認：@<br>{}
一二三四五六七八九十一二三四五六七八九十一二三四五六七八九十一二三四五六七八九十一二三四五六七八九十一二三四五六七八九十


//centering{
＊＊＊＊＊＊＊＊＊＊＊ 以下、まえがきのサンプル ＊＊＊＊＊＊＊＊＊＊＊@<br>{}
//}


本書を手に取っていただき、ありがとうございます。

本書は、XXXについてわかりやすく解説した本です。この本を読めば、XXXの基礎的な使い方が身につきます。
===== 本書で得られること

 * XXXについての基礎的な使い方


===== 対象読者

 * XXXについて興味がある人
 * XXXの入門書を読んだ人（まったくの初心者は対象外です）


===== 前提知識

 * Linuxについての基礎知識
 * 何らかのプログラミング言語の基礎知識


===== 問い合わせ先

 * URL: https://www.example.com/
 * Mail: support@example.com
 * Twitter: @example

//embed[latex]{
\clearpage
//}


=== Voiceflowチームより寄稿
Before we started Voiceflow, we were Alexa Skill creators working on an Alexa skill called Fable. The premise was a series of interactive children's stories with real voice actors, and a "choose your own adventure" format that would give the reader the ability to use their voice and control the narrative. At that time, we had all left school to work on the concept together. We felt voice technology was going to change the world and couldn't wait to be a part of the revolution. Working on Fable, we would stay up for days straight writing interactive children stories that would be played on Alexa. Every week we would write a new story, create the audio, print physical storybooks for the families to read alongside Alexa, then box-up the stories and devices and deliver them on our bikes every Friday afternoon.  

//quote{
私たちがVoiceflowをはじめる前は、Fableと呼ばれるAlexaスキルに取り組んでいるAlexa Skillクリエイターでした。前提は、実際の声優による一連のインタラクティブな子供向けストーリーと、読者が自分の声を使用して物語を制御できるようにする「独自のアドベンチャーを選択する」形式でした。当時、私たちは全員一緒に学校を出て、一緒にこのコンセプトに取り組みました。私たちは、音声技術が世界を変えるだろうと感じ、革命の一部になるのを待ちきれませんでした。 Fableに取り組んでいると、Alexaでプレイされるインタラクティブな子供たちの物語を何日も書き続けることになります。毎週新しいストーリーを書き、オーディオを作成し、家族がAlexaと一緒に読むために物理的なストーリーブックを印刷してから、ストーリーとデバイスを箱に入れて毎週金曜日の午後にバイクで届けます。
//}

//numberlessimage[chap00-preface/voiceflow_01][The Fable team packaging up boxes of stories to be delivered]

//embed[latex]{
\clearpage
//}

Fable became a popular Alexa skill in Canada. However, Alexa often misheard the families and heard "Bible" instead of "Fable". So, we changed the name of the skill to "Storyflow" which was named after our role model of a company, Webflow. We worked incredibly hard for 5 months, without any pay, to build an amazing stories platform on Alexa. Below is a flowchart we made for one of our interactive stories that would later serve as the inspiration for Voiceflow's flowchart design system.  

//quote{
Fableはカナダで人気のAlexaスキルになりました。しかし、アレクサはしばしば「Fable」を「Bible」（聖書）と聴き間違えました。そのため、スキルの名前を「Storyflow」に変更しました。これは、会社のロールモデルであるWebflowにちなんで命名されました。 Alexaですばらしいストーリープラットフォームを構築するために、5か月間無償で非常にハードに働きました。以下は、Voiceflowのフローチャート設計システムのインスピレーションとなるインタラクティブストーリーの1つのために作成したフローチャートです。
//}

//numberlessimage[chap00-preface/voiceflow_02][Flowchart used to model out an interactive story on Storyflow]

//embed[latex]{
\clearpage
//}

Storyflow was becoming very popular and being used by over 5,000 families across the United States, Canada, and United Kingdom. It was so successful in fact that we were able to raise $500,000 of investment to start a real company around the concept. Our goal became to build the "YouTube of voice entertainment" - a place where anyone could create and share stories on Alexa.   

//quote{
Storyflowは非常に人気があり、米国、カナダ、および英国の5,000を超える家族で使用されています。実際、非常に成功したため、50万ドルの投資を集めて、このコンセプトに沿って実際の会社を立ち上げることができました。私たちの目標は、「音声エンターテインメントのYouTube」を作成することでした。誰でもAlexaでストーリーを作成して共有できる場所です。
//}

//numberlessimage[chap00-preface/voiceflow_03][The original Voiceflow office - a small rented dormitory room]

//embed[latex]{
\clearpage
//}

To achieve this vision, we needed to make it easier to create Alexa content. Writing code was too difficult, took too long, and existing visual building tools were not good enough. So, we decided to build our own tool to make it easier to create Alexa content that could then be shared on our entertainment platform, Storyflow.   

//quote{
このビジョンを達成するには、Alexaコンテンツを簡単に作成できるようにする必要がありました。コードの記述は難しすぎ、時間がかかりすぎ、既存の視覚的な構築ツールでは不十分でした。そこで、エンターテイメントプラットフォームであるStoryflowで共有できるAlexaコンテンツを簡単に作成できる独自のツールを構築することにしました。
//}

//numberlessimage[chap00-preface/voiceflow_04][The Voiceflow team showing off the first version of "Storyflow"]

//embed[latex]{
\clearpage
//}

The Storyflow "creator" platform was rudimentary, but worked well. It helped us build Storyflow stories at a very fast pace. Soon, we were starting to generate our first income from Alexa.

//quote{
Storyflowのクリエイター向けプラットフォームは基本的なものでしたが、うまく機能しました。 Storyflowストーリーを非常に速いペースで構築するのに役立ちました。すぐに、Alexaから最初の収入を得始めました。
//}

//numberlessimage[chap00-preface/voiceflow_05][Storyflow's first ever successful income]

//embed[latex]{
\clearpage
//}

We then opened Storyflow to other interactive story creators to add their content to the platform. We made Storyflow easy to use so that children's story writers, whom might not be technically savvy, could still use Storyflow to publish their stories. Within months, over 3,000 people were using Storyflow to create their own Alexa content. However, it wasn't just interactive stories - people were creating all kinds of amazing apps on Storyflow. It was then we realized that we had a much larger mission - to help everyone create amazing conversational experiences, regardless of their technical abilities.

//quote{
次に、他のインタラクティブなストーリー作成者向けにStoryflowを開き、プラットフォームにコンテンツを追加しました。 Storyflowを使いやすくし、技術的に精通していない子供のストーリーライターがStoryflowを使用してストーリーを公開できるようにしました。数か月のうちに、3,000人以上がStoryflowを使用して独自のAlexaコンテンツを作成していました。しかし、それは単なるインタラクティブなストーリーではなく、人々はStoryflowであらゆる種類の素晴らしいアプリを作成していました。そのとき、技術的な能力に関係なく、誰もがすばらしい会話体験を作成できるようにするというはるかに大きな使命があることに気付きました。
//}

//numberlessimage[chap00-preface/voiceflow_06][The Storyflow Alexa Skill, built on the Storyflow creator platform]

//embed[latex]{
\clearpage
//}

We changed our name to Voiceflow to reflect this new mission and focus. Since then, it's been 2 years of hard work, every day and night. In January 2020, Voiceflow supports over 23,000 creators across 30+ countries. In 2019, Voiceflow powered over 60,000,000 conversations across both Alexa and Google Assistant, and hosts 6,000+ voice apps. Further, the Voiceflow Community Group on Facebook now has over 5,500 active members and is growing rapidly every day.@<br>{}
We view Community as a core part of Voiceflow's product, not just an external service. Knowing that there are thousands of other creators just like you to learn, share, and socialize with is part of the Voiceflow product experience. This is why Communities like Voiceflow Japan and others are so important - they are a core part of Voiceflow. 

//quote{
この新しいミッションとフォーカスを反映するために、名前をVoiceflowに変更しました。 それ以来、毎日、夜を問わず、2年間にわたるハードワークを続けてきました。 2020年1月、Voiceflowは30か国以上で23,000人以上のクリエイターをサポートしています。 2019年、VoiceflowはAlexaとGoogle Assistantの両方で60,000,000を超える会話を処理し、6,000以上の音声アプリをホストしました。 さらに、FacebookのVoiceflowコミュニティグループには現在5,500人以上のアクティブなメンバーがおり、毎日急速に成長しています。@<br>{}
コミュニティは、単なる外部サービスではなく、Voiceflowの製品の中核部分であると考えています。 他にも数千人のクリエイターがあなたと同じように学び、共有し、交流することを知っていることは、Voiceflow製品エクスペリエンスの一部です。 これが、Voiceflow Japanなどのコミュニティが非常に重要である理由です。Voiceflowのコア部分です。
//}

//numberlessimage[chap00-preface/voiceflow_07][Voiceflow India Meetup]

//embed[latex]{
\clearpage
//}

As Voiceflow grows, so will the product and role of community. Through 2020 we plan to make Voiceflow more international by adding additional language support, adding new channels like Siri and Bixby to create for, and further integrating the Voiceflow Community into the platform itself with the expansion of workspace and collaboration features.@<br>{}
None of this could be possible without the hard work of thousands of Voiceflow users, customers, and teammates who support the platform every day. Together, we'll build a platform that allows anyone to create conversational interfaces across every platform, not just voice platforms. To all of our early users, customers, partners, and supporters - thank you. We have so much more to accomplish together.

//quote{
Voiceflowが成長するにつれて、コミュニティの製品と役割も成長します。 2020年までに、言語サポートを追加し、SiriやBixbyなどの新しいチャネルを追加して作成し、Voiceflowコミュニティをプラットフォーム自体にさらに統合して、ワークスペースおよびコラボレーション機能を拡張することにより、Voiceflowをより国際的にする予定です。@<br>{}
プラットフォームを毎日サポートしてくれる何千人ものVoiceflowユーザー、お客様、そしてチームメイトの努力なしにはこれは不可能です。音声プラットフォームだけでなく、あらゆるプラットフォームで、誰でも会話型インターフェースを作成できるプラットフォームを一緒に構築しましょう。 すべての初期ユーザー、お客様、パートナー、サポーターに感謝します。 一緒に成し遂げることがたくさんあります。
//}

//numberlessimage[chap00-preface/voiceflow_08][Voiceflow team, December 2019]
