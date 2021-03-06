//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SwitchCellDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Contact, MBProgressHUD, NSMutableArray, NSString, RadioButton, UISwitch, UITableView;

@interface AlarmSettingController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, SwitchCellDelegate>
{
    int _dwAlarmAcceptRow;
    int _dwAlarmPushAccountRow;
    int _dwAlarmEmailRow;
    int _dwMotionRow;
    int _dwBuzzerRow;
    int _dwHumanInfraredRow;
    int _dwWiredAlarmInputRow;
    int _dwWiredAlarmOutputRow;
    _Bool _isFirstLoadingCompolete;
    _Bool _isLoadingAlarmState;
    _Bool _isLoadingBindId;
    _Bool _isLoadingBindEmail;
    _Bool _isLoadingMotionDetect;
    _Bool _isLoadingBuzzer;
    _Bool _isLoadingHumanInfrared;
    _Bool _isLoadingWiredAlarmInput;
    _Bool _isLoadingWiredAlarmOutput;
    _Bool _isSupportHI_WI_WO;
    _Bool _isRefreshAlarmEmail;
    _Bool _isNotVerifiedEmail;
    int _isSMTP;
    int _isRightPwd;
    int _isEmailVerified;
    int _smtpPort;
    int _encryptType;
    int _reserve;
    UITableView *_tableView;
    Contact *_contact;
    UISwitch *_alarmSwitch;
    UISwitch *_motionSwitch;
    UISwitch *_buzzerSwitch;
    UISwitch *_humanInfraredSwitch;
    UISwitch *_wiredAlarmInputSwitch;
    UISwitch *_wiredAlarmOutputSwitch;
    RadioButton *_radio1;
    RadioButton *_radio2;
    RadioButton *_radio3;
    long long _alarmState;
    long long _lastAlarmState;
    long long _buzzerState;
    long long _lastBuzzerState;
    long long _motionState;
    long long _lastMotionState;
    long long _humanInfraredState;
    long long _lastHumanInfraredState;
    long long _wiredAlarmInputState;
    long long _lastWiredAlarmInputState;
    long long _wiredAlarmOutputState;
    long long _lastWiredAlarmOutputState;
    NSString *_bindEmail;
    NSString *_smtpServer;
    NSString *_smtpUser;
    NSString *_smtpPwd;
    NSMutableArray *_bindIds;
    NSMutableArray *_lastSetBindIds;
    long long _selectedUnbindAccountIndex;
    long long _maxBindIdCount;
    MBProgressHUD *_progressAlert;
}

@property _Bool isNotVerifiedEmail; // @synthesize isNotVerifiedEmail=_isNotVerifiedEmail;
@property _Bool isRefreshAlarmEmail; // @synthesize isRefreshAlarmEmail=_isRefreshAlarmEmail;
@property(nonatomic) _Bool isSupportHI_WI_WO; // @synthesize isSupportHI_WI_WO=_isSupportHI_WI_WO;
@property(retain, nonatomic) MBProgressHUD *progressAlert; // @synthesize progressAlert=_progressAlert;
@property long long maxBindIdCount; // @synthesize maxBindIdCount=_maxBindIdCount;
@property long long selectedUnbindAccountIndex; // @synthesize selectedUnbindAccountIndex=_selectedUnbindAccountIndex;
@property(retain, nonatomic) NSMutableArray *lastSetBindIds; // @synthesize lastSetBindIds=_lastSetBindIds;
@property(retain, nonatomic) NSMutableArray *bindIds; // @synthesize bindIds=_bindIds;
@property(nonatomic) int reserve; // @synthesize reserve=_reserve;
@property(nonatomic) int encryptType; // @synthesize encryptType=_encryptType;
@property(retain, nonatomic) NSString *smtpPwd; // @synthesize smtpPwd=_smtpPwd;
@property(retain, nonatomic) NSString *smtpUser; // @synthesize smtpUser=_smtpUser;
@property(nonatomic) int smtpPort; // @synthesize smtpPort=_smtpPort;
@property(retain, nonatomic) NSString *smtpServer; // @synthesize smtpServer=_smtpServer;
@property(retain, nonatomic) NSString *bindEmail; // @synthesize bindEmail=_bindEmail;
@property(nonatomic) int isEmailVerified; // @synthesize isEmailVerified=_isEmailVerified;
@property(nonatomic) int isRightPwd; // @synthesize isRightPwd=_isRightPwd;
@property(nonatomic) int isSMTP; // @synthesize isSMTP=_isSMTP;
@property long long lastWiredAlarmOutputState; // @synthesize lastWiredAlarmOutputState=_lastWiredAlarmOutputState;
@property long long wiredAlarmOutputState; // @synthesize wiredAlarmOutputState=_wiredAlarmOutputState;
@property long long lastWiredAlarmInputState; // @synthesize lastWiredAlarmInputState=_lastWiredAlarmInputState;
@property long long wiredAlarmInputState; // @synthesize wiredAlarmInputState=_wiredAlarmInputState;
@property long long lastHumanInfraredState; // @synthesize lastHumanInfraredState=_lastHumanInfraredState;
@property long long humanInfraredState; // @synthesize humanInfraredState=_humanInfraredState;
@property long long lastMotionState; // @synthesize lastMotionState=_lastMotionState;
@property long long motionState; // @synthesize motionState=_motionState;
@property long long lastBuzzerState; // @synthesize lastBuzzerState=_lastBuzzerState;
@property long long buzzerState; // @synthesize buzzerState=_buzzerState;
@property long long lastAlarmState; // @synthesize lastAlarmState=_lastAlarmState;
@property long long alarmState; // @synthesize alarmState=_alarmState;
@property _Bool isLoadingWiredAlarmOutput; // @synthesize isLoadingWiredAlarmOutput=_isLoadingWiredAlarmOutput;
@property _Bool isLoadingWiredAlarmInput; // @synthesize isLoadingWiredAlarmInput=_isLoadingWiredAlarmInput;
@property _Bool isLoadingHumanInfrared; // @synthesize isLoadingHumanInfrared=_isLoadingHumanInfrared;
@property _Bool isLoadingBuzzer; // @synthesize isLoadingBuzzer=_isLoadingBuzzer;
@property _Bool isLoadingMotionDetect; // @synthesize isLoadingMotionDetect=_isLoadingMotionDetect;
@property _Bool isLoadingBindEmail; // @synthesize isLoadingBindEmail=_isLoadingBindEmail;
@property _Bool isLoadingBindId; // @synthesize isLoadingBindId=_isLoadingBindId;
@property _Bool isLoadingAlarmState; // @synthesize isLoadingAlarmState=_isLoadingAlarmState;
@property _Bool isFirstLoadingCompolete; // @synthesize isFirstLoadingCompolete=_isFirstLoadingCompolete;
@property(retain, nonatomic) RadioButton *radio3; // @synthesize radio3=_radio3;
@property(retain, nonatomic) RadioButton *radio2; // @synthesize radio2=_radio2;
@property(retain, nonatomic) RadioButton *radio1; // @synthesize radio1=_radio1;
@property(retain, nonatomic) UISwitch *wiredAlarmOutputSwitch; // @synthesize wiredAlarmOutputSwitch=_wiredAlarmOutputSwitch;
@property(retain, nonatomic) UISwitch *wiredAlarmInputSwitch; // @synthesize wiredAlarmInputSwitch=_wiredAlarmInputSwitch;
@property(retain, nonatomic) UISwitch *humanInfraredSwitch; // @synthesize humanInfraredSwitch=_humanInfraredSwitch;
@property(retain, nonatomic) UISwitch *buzzerSwitch; // @synthesize buzzerSwitch=_buzzerSwitch;
@property(retain, nonatomic) UISwitch *motionSwitch; // @synthesize motionSwitch=_motionSwitch;
@property(retain, nonatomic) UISwitch *alarmSwitch; // @synthesize alarmSwitch=_alarmSwitch;
@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)onRadio3Press:(id)arg1;
- (void)onRadio2Press:(id)arg1;
- (void)onRadio1Press:(id)arg1;
- (void)onMotionChange:(id)arg1;
- (void)onSwitchValueChange:(id)arg1 indexPath:(id)arg2;
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
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

