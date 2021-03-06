//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MiPushXMPPModule.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MiPushXMPPRoom : MiPushXMPPModule
{
    NSString *roomName;
    NSString *nickName;
    NSString *subject;
    NSString *invitedUser;
    _Bool _isJoined;
    NSMutableDictionary *occupants;
}

- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (void)xmppStream:(id)arg1 didReceivePresence:(id)arg2;
- (void)onDidChangeOccupants;
- (void)sendMessage:(id)arg1;
- (void)rejectInvitationWithMessage:(id)arg1;
- (void)rejectInvitation;
- (void)acceptInvitation;
- (void)inviteUser:(id)arg1 withMessage:(id)arg2;
- (void)chageNickForRoom:(id)arg1;
- (void)leaveRoom;
- (void)joinRoom;
- (void)sendInstantRoomConfig;
- (void)createOrJoinRoom;
@property(copy) NSString *invitedUser; // @dynamic invitedUser;
@property(readonly) NSDictionary *occupants; // @dynamic occupants;
@property _Bool isJoined; // @dynamic isJoined;
@property(readonly) NSString *subject; // @dynamic subject;
@property(readonly) NSString *nickName; // @dynamic nickName;
@property(readonly) NSString *roomName; // @dynamic roomName;
- (void)dealloc;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithRoomName:(id)arg1 nickName:(id)arg2 dispatchQueue:(struct dispatch_queue_s *)arg3;
- (id)initWithRoomName:(id)arg1 nickName:(id)arg2;
- (id)initWithDispatchQueue:(struct dispatch_queue_s *)arg1;
- (id)init;

@end

