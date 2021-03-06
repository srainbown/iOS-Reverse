//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPMediaControllerDelegate.h"
#import "TLMediaServerDelegate.h"
#import "UIAlertViewDelegate.h"

@class MDAudioPlayerController, MWPhotoBrowser, NEUPLTAction, NEUVideoViewController, NSMutableArray, NSMutableDictionary, NSString, PPMediaController, PPUPnP, UINavigationController;

@interface TLMediaPlayerManagerCenter : NSObject <PPMediaControllerDelegate, TLMediaServerDelegate, UIAlertViewDelegate>
{
    PPUPnP *_upnp;
    PPMediaController *_controller;
    int _curPlayerType;
    int _curUsingPlayerType;
    id _curUsingPlayerObj;
    int _mediaItemType;
    NSMutableArray *_mediaItemArray;
    NSMutableDictionary *_mediaTypeArray;
    MWPhotoBrowser *_photoBrowser;
    MDAudioPlayerController *_audioPlayer;
    NEUVideoViewController *_neuVideoPlayer;
    NEUPLTAction *_curAction;
    NEUPLTAction *_tempSaveAction;
    BOOL _isMulitePlay;
    UINavigationController *_nav;
    NSString *_strCurPlayingUrl;
    NSMutableDictionary *_playerObjDic;
    id _curDmcObj;
    id <TLMediaServerDelegate> _dmsDelegate;
    BOOL _isShowRenderAlert;
}

+ (id)sharedTLMediaPlayerManagerCenter;
@property(nonatomic) BOOL isShowRenderAlert; // @synthesize isShowRenderAlert=_isShowRenderAlert;
@property(nonatomic) id <TLMediaServerDelegate> dmsDelegate; // @synthesize dmsDelegate=_dmsDelegate;
@property(nonatomic) id curDmcObj; // @synthesize curDmcObj=_curDmcObj;
@property(retain, nonatomic) NSString *strCurPlayingUrl; // @synthesize strCurPlayingUrl=_strCurPlayingUrl;
@property(retain, nonatomic) UINavigationController *nav; // @synthesize nav=_nav;
@property(nonatomic) int curPlayerType; // @synthesize curPlayerType=_curPlayerType;
- (void)dealloc;
- (void)testInitFileToSandBox;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)getMediaTypeByURL:(id)arg1;
- (id)getExNameFromString:(id)arg1 UsingEncoding:(unsigned int)arg2;
- (void)updateNavWithViews:(id)arg1;
- (void)OnStopResult:(id)arg1;
- (void)OnPauseResult:(id)arg1;
- (void)OnPlayResult:(id)arg1;
- (void)speakerUpdated:(id)arg1;
- (void)browseDidRespond:(id)arg1;
- (void)didRemoveSpeaker:(id)arg1;
- (BOOL)shouldAddSpeaker:(id)arg1;
- (void)didRemoveServer:(id)arg1;
- (BOOL)shouldAddServer:(id)arg1;
- (void)removeObj;
- (void)registObj:(id)arg1;
- (void)registeredNotifications;
- (void)showMediaPlayerNoticication:(id)arg1;
- (void)restore;
- (id)init;
- (void)playAction:(id)arg1;
- (void)playLocalUrl:(id)arg1;
- (void)ReStartDlnaServices;
- (void)ReStartDlnaServicesWithoutUUID:(id)arg1;
- (void)ReStartUpnp;
- (void)StopDlnaServices;
- (_Bool)StartDlnaServicesWithDMSDelegate:(id)arg1;
- (BOOL)StopDevice:(id)arg1;
- (BOOL)PauseDevice:(id)arg1;
- (BOOL)PlayDevice:(id)arg1;
- (BOOL)SendItem:(id)arg1 toDevice:(id)arg2;

@end

