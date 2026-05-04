#if defined(_MSC_VER)
extern "C" __declspec(dllexport) void LuauSharedExports_dummy() {}
#else
extern "C" void LuauSharedExports_dummy() {}
#endif
