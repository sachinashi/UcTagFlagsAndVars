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
