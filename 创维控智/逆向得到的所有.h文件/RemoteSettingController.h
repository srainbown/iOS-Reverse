//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Contact, NSString, UITableView;

@interface RemoteSettingController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isLoadingRemoteDefence;
    _Bool _isLoadingRemoteRecord;
    UITableView *_tableView;
    Contact *_contact;
    long long _remoteDefenceState;
    long long _remoteRecordState;
    long long _lastRemoteDefenceState;
    long long _lastRemoteRecordState;
}

@property long long lastRemoteRecordState; // @synthesize lastRemoteRecordState=_lastRemoteRecordState;
@property long long lastRemoteDefenceState; // @synthesize lastRemoteDefenceState=_lastRemoteDefenceState;
@property long long remoteRecordState; // @synthesize remoteRecordState=_remoteRecordState;
@property long long remoteDefenceState; // @synthesize remoteDefenceState=_remoteDefenceState;
@property _Bool isLoadingRemoteRecord; // @synthesize isLoadingRemoteRecord=_isLoadingRemoteRecord;
@property _Bool isLoadingRemoteDefence; // @synthesize isLoadingRemoteDefence=_isLoadingRemoteDefence;
@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)onRemoteRecordChange:(id)arg1;
- (void)onRemoteDefenceChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackPress;
- (void)initComponent;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)ack_receiveRemoteMessage:(id)arg1;
- (void)receiveRemoteMessage:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

