= まえがき

本書を手に取っていただき、ありがとうございます。

本書は、ノンコーディングで音声アプリケーションを作成できるサービス「Voiceflow」についてわかりやすく解説した本です。@<br>{}
AIやクラウドコンピューティングの進化により、音声アプリケーションは飛躍的に使いやすくなり身近なモノになりつつあります。また、今後は音声UIを備えるモノが増え、ますます音声UXの担う役割は重要になるでしょう。@<br>{}
この本には、Voiceflowの使い方だけにとどまらず、音声アプリケーションの作成手法や勘所など、VUI/VUX界における著名な方々のエッセンスが詰まっており、まさに虎の巻といえるものになっています。@<br>{}
エンジニアの方に読んでいただくのももちろん光栄ですが、コーディングをしない全ての職業・職種の方、小中学生を含めた学生の方に読んでいただき、音声UIの世界に一歩踏み入れて頂くきっかけになれば幸いです。


===== 対象読者

 * 音声UIについて興味がある人（老若男女、あらゆる職業・職種を問いません）
 * Voiceflowについて興味がある人


//embed[latex]{
\clearpage
//}

=== Voiceflowチームより寄稿
Before we started Voiceflow, we were Alexa Skill creators working on an Alexa skill called Fable. The premise was a series of interactive children's stories with real voice actors, and a "choose your own adventure" format that would give the reader the ability to use their voice and control the narrative. At that time, we had all left school to work on the concept together. We felt voice technology was going to change the world and couldn't wait to be a part of the revolution. Working on Fable, we would stay up for days straight writing interactive children stories that would be played on Alexa. Every week we would write a new story, create the audio, print physical storybooks for the families to read alongside Alexa, then box-up the stories and devices and deliver them on our bikes every Friday afternoon.  

//quote{
私たちがVoiceflowをはじめる前は、FableというAlexaスキルに取り組んでいるAlexaスキルクリエイター集団でした。前提は、実際の声優によるインタラクティブな子供向けストーリーのシリーズと、読者が自分の声を使って物語を操作できる「自分だけのアドベンチャーを選べる」形式でした。当時、私たちはこのコンセプトに取り組むため、全員一緒に学校を退学しました。私たちは、音声技術が世界を変えるだろうと感じ、その革命の一部になることを待ちきれませんでした。 Fableに取り組んでいると、Alexaでプレイされるインタラクティブな子供たちの物語を何日も書き続けることになります。毎週新しいストーリーを書き、オーディオを作成し、家族がAlexaと一緒に読むために物理的なストーリーブックを印刷してから、ストーリーとデバイスを箱詰めして毎週金曜日の午後にバイクで届けていました。
//}

//numberlessimage[chap00-preface/voiceflow_01][The Fable team packaging up boxes of stories to be delivered][scale=0.5]

//embed[latex]{
\clearpage
//}

Fable became a popular Alexa skill in Canada. However, Alexa often misheard the families and heard "Bible" instead of "Fable". So, we changed the name of the skill to "Storyflow" which was named after our role model of a company, Webflow. We worked incredibly hard for 5 months, without any pay, to build an amazing stories platform on Alexa. Below is a flowchart we made for one of our interactive stories that would later serve as the inspiration for Voiceflow's flowchart design system.  

//quote{
Fableはカナダで人気のAlexaスキルになりました。しかし、アレクサはしばしば「Fable」を「Bible」（聖書）と聴き間違えてしまいます。そのため、スキルの名前を「Storyflow」に変更しました。これは、会社のロールモデルであるWebflowにちなんでいます。 Alexaで素晴らしいストーリープラットフォームを構築するために、5か月間無給で非常にハードに働きました。以下は、後にVoiceflowのフローチャート設計システムの原点となるインタラクティブストーリーのために作成したフローチャートです。
//}

//numberlessimage[chap00-preface/voiceflow_02][Flowchart used to model out an interactive story on Storyflow]

//embed[latex]{
\clearpage
//}

Storyflow was becoming very popular and being used by over 5,000 families across the United States, Canada, and United Kingdom. It was so successful in fact that we were able to raise $500,000 of investment to start a real company around the concept. Our goal became to build the "YouTube of voice entertainment" - a place where anyone could create and share stories on Alexa.   

//quote{
Storyflowは絶大な人気を集め、米国、カナダ、および英国の5,000を超える家庭で使われました。実際、非常に成功したため、50万ドルの投資を集めて、このコンセプトに沿って実際の会社を立ち上げることができました。私たちの目標は、「音声エンターテインメントのYouTube」を作ることでした。それは、誰でもAlexaでストーリーを作成して共有できる場所です。
//}

//numberlessimage[chap00-preface/voiceflow_03][The original Voiceflow office - a small rented dormitory room]

//embed[latex]{
\clearpage
//}

To achieve this vision, we needed to make it easier to create Alexa content. Writing code was too difficult, took too long, and existing visual building tools were not good enough. So, we decided to build our own tool to make it easier to create Alexa content that could then be shared on our entertainment platform, Storyflow.   

//quote{
このビジョンを達成するには、Alexaコンテンツを簡単に作成できるようにする必要がありました。コードの記述は難しすぎ、時間がかかりすぎ、既存の視覚的な構築ツールでは不十分だったのです。そこで、私たちのエンターテイメントプラットフォームであるStoryflowで共有できる、Alexaコンテンツを簡単に作成できる独自のツールを構築することにしました。
//}

//numberlessimage[chap00-preface/voiceflow_04][The Voiceflow team showing off the first version of "Storyflow"]

//embed[latex]{
\clearpage
//}

The Storyflow "creator" platform was rudimentary, but worked well. It helped us build Storyflow stories at a very fast pace. Soon, we were starting to generate our first income from Alexa.

//quote{
Storyflowのクリエイター向けプラットフォームは初歩的なものでしたが、うまく機能しました。 そのため、Storyflowストーリーを非常に速いペースで構築するのに役立ちました。すぐに、Alexaから最初の収入を生み出すことができるようになったのです。
//}

//numberlessimage[chap00-preface/voiceflow_05][Storyflow's first ever successful income]

//embed[latex]{
\clearpage
//}

We then opened Storyflow to other interactive story creators to add their content to the platform. We made Storyflow easy to use so that children's story writers, whom might not be technically savvy, could still use Storyflow to publish their stories. Within months, over 3,000 people were using Storyflow to create their own Alexa content. However, it wasn't just interactive stories - people were creating all kinds of amazing apps on Storyflow. It was then we realized that we had a much larger mission - to help everyone create amazing conversational experiences, regardless of their technical abilities.

//quote{
次に、他のインタラクティブなストーリー作成者向けにStoryflowを開き、プラットフォームにコンテンツを追加しました。 Storyflowを使いやすくし、技術的に精通していない子供のストーリーライターでもStoryflowを使用してストーリーを公開できるようにしました。数か月のうちに、3,000人以上がStoryflowを使用して独自のAlexaコンテンツを作成していました。しかし、それは単なるインタラクティブなストーリーではなく、ユーザーはStoryflowであらゆる種類の素晴らしいアプリを作成していたのです。そのとき、技術的な能力に関係なく、誰もがすばらしい会話体験を作ることができるようにするという、はるかに大きな使命があることに気付きました。
//}

//numberlessimage[chap00-preface/voiceflow_06][The Storyflow Alexa Skill, built on the Storyflow creator platform]

//embed[latex]{
\clearpage
//}

We changed our name to Voiceflow to reflect this new mission and focus. Since then, it's been 2 years of hard work, every day and night. In January 2020, Voiceflow supports over 23,000 creators across 30+ countries. In 2019, Voiceflow powered over 60,000,000 conversations across both Alexa and Google Assistant, and hosts 6,000+ voice apps. Further, the Voiceflow Community Group on Facebook now has over 5,500 active members and is growing rapidly every day.@<br>{}
We view Community as a core part of Voiceflow's product, not just an external service. Knowing that there are thousands of other creators just like you to learn, share, and socialize with is part of the Voiceflow product experience. This is why Communities like Voiceflow Japan and others are so important - they are a core part of Voiceflow. 

//quote{
この新しいミッションと集中をわかりやすくするために、名前をVoiceflowに変更しました。 それ以来、毎日昼夜を問わず2年間にわたるハードワークを続けてきました。 2020年1月現在、Voiceflowは30か国以上で23,000人以上のクリエイターをサポートしています。 2019年、VoiceflowはAlexaとGoogle Assistantの両方で60,000,000を超える会話を処理し、6,000以上の音声アプリを抱えています。 さらに、FacebookのVoiceflowコミュニティグループには現在5,500人以上のアクティブなメンバーがいて、毎日急速に成長しています。@<br>{}
私たちは、コミュニティは単なる外部サービスではなく、Voiceflowのプロダクトの中核部分であると考えています。 数千人のクリエイターがあなたと同じように学び、共有し、交流することを知っていることは、Voiceflowのプロダクト体験の一部であると言えます。 これが、Voiceflow Japanなどのコミュニティが非常に重要である理由です。Voiceflowのコア部分なのです。
//}

//numberlessimage[chap00-preface/voiceflow_07][Voiceflow India Meetup]

//embed[latex]{
\clearpage
//}

As Voiceflow grows, so will the product and role of community. Through 2020 we plan to make Voiceflow more international by adding additional language support, adding new channels like Siri and Bixby to create for, and further integrating the Voiceflow Community into the platform itself with the expansion of workspace and collaboration features.@<br>{}
None of this could be possible without the hard work of thousands of Voiceflow users, customers, and teammates who support the platform every day. Together, we'll build a platform that allows anyone to create conversational interfaces across every platform, not just voice platforms. To all of our early users, customers, partners, and supporters - thank you. We have so much more to accomplish together.

//quote{
Voiceflowが成長するにつれて、プロダクト及びコミュニティの役割も成長します。 2020年には新しい言語のサポート開始し、SiriやBixbyなどの新しいチャネルも利用できるようになり、Voiceflowコミュニティをプラットフォーム自体にさらに統合して、ワークスペース及びコラボレーション機能を拡張することにより、Voiceflowをよりグローバルにする予定です。@<br>{}
プラットフォームを毎日サポートしてくれる何千人ものVoiceflowユーザー、お客様、そしてチームメイトの努力なしにはこれは不可能です。音声プラットフォームだけでなく、あらゆるプラットフォームで、誰でも会話型インターフェースを作成できるサービスを一緒に構築しましょう。 すべての初期ユーザー、お客様、パートナー、サポーターに感謝します。 一緒に成し遂げたいことがまだまだたくさんあります。
//}

//numberlessimage[chap00-preface/voiceflow_08][Voiceflow team, December 2019][scale=0.9]
