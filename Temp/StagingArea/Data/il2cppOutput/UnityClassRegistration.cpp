struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 70 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//6. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//9. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//13. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//16. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//17. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//18. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//19. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//20. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//21. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//25. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//26. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//27. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//28. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//29. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//30. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//31. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//32. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//33. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//34. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//35. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//36. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//37. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//38. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//39. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//40. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//41. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//42. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//43. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//44. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//45. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//46. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//47. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//48. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//49. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//50. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//51. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//52. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//53. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//54. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//55. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//56. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//57. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//58. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//59. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//60. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//61. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//62. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//63. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//64. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//65. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//66. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//67. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//68. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//69. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
