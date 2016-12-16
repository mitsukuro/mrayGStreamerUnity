


#pragma once

#include "Unity/IUnityInterface.h"
#include "GstNetworkVideoPlayer.h"
#include "GstCustomVideoPlayer.h"
#include "GstNetworkMultipleVideoPlayer.h"
#include "GstNetworkAudioPlayer.h"


using namespace mray;
using namespace video;

#ifdef USE_UNITY_NETWORK
extern "C" UNITY_INTERFACE_EXPORT void* mray_gst_createNetworkPlayer();
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_netPlayerSetIP(GstNetworkVideoPlayer* p, const char* ip, int videoPort, bool rtcp);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_netPlayerCreateStream(GstNetworkVideoPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_netPlayerGetFrameSize(GstNetworkVideoPlayer* p, int &w, int &h, int& components);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_netPlayerGrabFrame(GstNetworkVideoPlayer* p, int &w, int &h);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_netPlayerBlitImage(GstNetworkVideoPlayer* p, void* _TextureNativePtr, int _UnityTextureWidth, int _UnityTextureHeight);
extern "C" UNITY_INTERFACE_EXPORT int mray_gst_netPlayerFrameCount(GstNetworkVideoPlayer* p);


extern "C" UNITY_INTERFACE_EXPORT void* mray_gst_createNetworkMultiplePlayer();
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_multiNetPlayerSetIP(GstNetworkMultipleVideoPlayer* p, const char* ip, int baseVideoPort,int count, bool rtcp);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_multiNetPlayerCreateStream(GstNetworkMultipleVideoPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_multiNetPlayerGetFrameSize(GstNetworkMultipleVideoPlayer* p, int &w, int &h, int& components);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_multiNetPlayerGrabFrame(GstNetworkMultipleVideoPlayer* p, int &w, int &h,int index);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_multiNetPlayerBlitImage(GstNetworkMultipleVideoPlayer* p, void* _TextureNativePtr, int _UnityTextureWidth, int _UnityTextureHeight, int index);
extern "C" UNITY_INTERFACE_EXPORT int mray_gst_multiNetPlayerFrameCount(GstNetworkMultipleVideoPlayer* p, int index);
extern "C" UNITY_INTERFACE_EXPORT uint  mray_gst_multiNetPlayerGetVideoPort(GstNetworkMultipleVideoPlayer* p, int index);
#endif

extern "C" UNITY_INTERFACE_EXPORT void* mray_gst_createCustomVideoPlayer();
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_customPlayerSetPipeline(GstCustomVideoPlayer* p, const char* pipeline);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_customPlayerCreateStream(GstCustomVideoPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_customPlayerGetFrameSize(GstCustomVideoPlayer* p, int &w, int &h, int& components);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_customPlayerGrabFrame(GstCustomVideoPlayer* p, int &w, int &h);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_customPlayerCopyFrame(GstCustomVideoPlayer* p, video::ImageInfo* target);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_customPlayerBlitImage(GstCustomVideoPlayer* p, void* _TextureNativePtr, int _UnityTextureWidth, int _UnityTextureHeight);
extern "C" UNITY_INTERFACE_EXPORT int mray_gst_customPlayerFrameCount(GstCustomVideoPlayer* p);



extern "C" UNITY_INTERFACE_EXPORT void mray_gst_PlayerDestroy(IGStreamerPlayer* p);

extern "C" UNITY_INTERFACE_EXPORT void mray_gst_PlayerPlay(IGStreamerPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_PlayerPause(IGStreamerPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_PlayerStop(IGStreamerPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_PlayerIsLoaded(IGStreamerPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_PlayerIsPlaying(IGStreamerPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_PlayerClose(IGStreamerPlayer* p);




extern "C" UNITY_INTERFACE_EXPORT void* mray_gst_createCustomVideoStreamer();
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_CustomVideoStreamerSetIP(GstNetworkVideoPlayer* p, const char* ip, int videoPort, bool rtcp);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_CustomVideoStreamerSetBitrate(GstNetworkVideoPlayer* p, int bitrate);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_CustomVideoStreamerSetResolution(GstNetworkVideoPlayer* p, int w, int h);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_CustomVideoStreamerCreateStream(GstNetworkVideoPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_CustomVideoStreamerGetFrameSize(GstNetworkVideoPlayer* p, int &w, int &h, int& components);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_CustomVideoStreamerGrabFrame(GstNetworkVideoPlayer* p, int &w, int &h);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_CustomVideoStreamerBlitImage(GstNetworkVideoPlayer* p, void* _TextureNativePtr, int _UnityTextureWidth, int _UnityTextureHeight);
extern "C" UNITY_INTERFACE_EXPORT int  mray_gst_CustomVideoStreamerFrameCount(GstNetworkVideoPlayer* p);


//////////////////////////////////////////////////////////////////////////
// Audio Player

#ifdef USE_UNITY_NETWORK
extern "C" UNITY_INTERFACE_EXPORT void* mray_gst_createNetworkAudioPlayer();
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_netAudioPlayerSetIP(GstNetworkAudioPlayer* p, const char* ip, int audioPort, bool rtcp);
extern "C" UNITY_INTERFACE_EXPORT bool mray_gst_netAudioPlayerCreateStream(GstNetworkAudioPlayer* p);
extern "C" UNITY_INTERFACE_EXPORT void mray_gst_netAudioPlayerSetVolume(GstNetworkAudioPlayer* p, float v);
extern "C" UNITY_INTERFACE_EXPORT uint mray_gst_netAudioPlayerGetAudioPort(GstNetworkAudioPlayer* p);
#endif
