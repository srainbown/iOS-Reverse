//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class PPMediaDevice, PPMediaObject;

@protocol PPMediaControllerDelegate
- (void)OnPauseResult:(PPMediaDevice *)arg1;
- (void)OnPlayResult:(PPMediaDevice *)arg1;
- (void)speakerUpdated:(PPMediaDevice *)arg1;
- (void)browseDidRespond:(PPMediaObject *)arg1;
- (void)didRemoveSpeaker:(PPMediaDevice *)arg1;
- (BOOL)shouldAddSpeaker:(PPMediaDevice *)arg1;
- (void)didRemoveServer:(PPMediaDevice *)arg1;
- (BOOL)shouldAddServer:(PPMediaDevice *)arg1;
@end

