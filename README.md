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

----
+Memorandum

UCTagFlagsSubsystem : Gameplay Tag -> bool

UCTagVarsSubsystem : Gameplay Tag -> float

UCTagActorBitwiseFlagSubsystem : Gameplay Tag -> int32

----

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
