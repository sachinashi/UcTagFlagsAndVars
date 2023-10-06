
This subsystem stores information during the game.

It is a subsystem that inherits from the game instance, so the information is retained across levels.
<br><br>

The gameplay tag is used as the key.
1. boolean flag
2. float variable
3. 32-bit integer bit masks
   
are each associated with a TMap.
<br><br>

Flag information can be called by "UCTagFlagsSubsystem".

Variable information can be called by "UCTagVarsSubsystem".

Bitmask information can be called with "UCTagActorBitwiseFlagSubsystem".
<br><br>

For an example of usage, please refer to the plugin folder

~~/Example/SampleMap

map in the plugin folder.

<b>Attention</b><br>
To reflect the sample tags, please add the data table to the gameplay tags of your project<br>
![image](https://github.com/sachinashi/UcTagFlagsAndVars/assets/76891938/f5e1bfef-6dbd-42ab-8f71-8db26f006a6d)
<br>
![image](https://github.com/sachinashi/UcTagFlagsAndVars/assets/76891938/61db0b02-1904-433f-946a-3825ec8d47c2)
<br>
After adding the tags, just to be sure,<br>

<b>BP_FlagSubsystemSample</b>

<b>BP_FlagTest</b>

recompile the entire project.<br>
<br>

<b>Memorandum</b>

UCTagFlagsSubsystem : Gameplay Tag -> bool

UCTagVarsSubsystem : Gameplay Tag -> float

UCTagActorBitwiseFlagSubsystem : Gameplay Tag -> int32

<br>
Translated with www.DeepL.com/Translator (free version)

---

ゲームの進行状況を保存するサブシステムです。<br>
ゲームインスタンスから継承されるサブシステムであるため、レベルを移動しても保持されます。
<br><br>

ゲームプレイタグをキーとして以下の情報をそれぞれ保存します。

１．bool型 フラグ

２．float型 変数

３．32ビットint型 ビットマスク

※それぞれ TMap<GameplayTag, ~~~> で関連付けられます
<br><br>

フラグ情報は "UCTagFlagsSubsystem" から呼び出せます。

変数情報は "UCTagVarsSubsystem" から呼び出せます。

ビットマスク情報は "UCTagActorBitwiseFlagSubsystem" から呼び出せます。
<br><br>

使用例はプラグインフォルダ

~~/Example/SampleMap

を参照してください。

<b>注意</b><br>
サンプルのタグを反映させるために、データテーブルをプロジェクトのゲームプレイタグに追加してください<br>
![image](https://github.com/sachinashi/UcTagFlagsAndVars/assets/76891938/f5e1bfef-6dbd-42ab-8f71-8db26f006a6d)

![image](https://github.com/sachinashi/UcTagFlagsAndVars/assets/76891938/61db0b02-1904-433f-946a-3825ec8d47c2)

タグを追加したあとは、念のため、<br>

<b>BP_FlagSubsystemSample</b>

<b>BP_FlagTest</b>

を再コンパイルして下さい。<br>

<b>備忘録</b>

UCTagFlagsSubsystem : Gameplay Tag -> bool

UCTagVarsSubsystem : Gameplay Tag -> float

UCTagActorBitwiseFlagSubsystem : Gameplay Tag -> int32
