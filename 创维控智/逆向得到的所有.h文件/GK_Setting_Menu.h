//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGridViewDelegate.h"
#import "UITextFieldDelegate.h"

@class AppDelegate, NSMutableArray, NSString, UIGridView, UIImageView, UISwitch, UITextFieldEx, UIView;

@interface GK_Setting_Menu : UIViewController <UIGridViewDelegate, UITextFieldDelegate>
{
    _Bool message;
    _Bool flag;
    NSMutableArray *_datalist;
    NSMutableArray *_dataTable;
    NSMutableArray *_inValue;
    int _isLOVE;
    int _seleNum;
    AppDelegate *delegate;
    _Bool _isLan;
    int _typeDigit;
    NSString *_mytitle;
    UIGridView *_scrollView;
    UIView *_viewLove;
    UIImageView *_imageLoveIcon;
    UITextFieldEx *_textLoveNum;
    UISwitch *_isLove;
}

@property(nonatomic) __weak UISwitch *isLove; // @synthesize isLove=_isLove;
@property(nonatomic) __weak UITextFieldEx *textLoveNum; // @synthesize textLoveNum=_textLoveNum;
@property(nonatomic) __weak UIImageView *imageLoveIcon; // @synthesize imageLoveIcon=_imageLoveIcon;
@property(retain, nonatomic) UIView *viewLove; // @synthesize viewLove=_viewLove;
@property(nonatomic) __weak UIGridView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *mytitle; // @synthesize mytitle=_mytitle;
@property int typeDigit; // @synthesize typeDigit=_typeDigit;
@property _Bool isLan; // @synthesize isLan=_isLan;
- (void).cxx_destruct;
- (void)MessageBack:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)btnLoveCancelTouchUpInside:(id)arg1;
- (void)btnLoveSaveTouchUpInside:(id)arg1;
- (void)btnLoveOKTouchUpInside:(id)arg1;
- (void)showPopViewIcon:(id)arg1 num:(int)arg2 isLove:(int)arg3;
- (void)dataRoading;
- (void)btnTouchEvent:(id)arg1;
- (void)btnBackTouchUpInside:(id)arg1;
- (void)gridView:(id)arg1 didLongPressRowAt:(int)arg2 AndColumnAt:(int)arg3;
- (void)gridView:(id)arg1 didSelectRowAt:(int)arg2 AndColumnAt:(int)arg3;
- (id)gridView:(id)arg1 cellForRowAt:(int)arg2 AndColumnAt:(int)arg3;
- (long long)numberOfCellsOfGridView:(id)arg1;
- (long long)numberOfColumnsOfGridView:(id)arg1;
- (double)gridView:(id)arg1 heightForRowAt:(int)arg2;
- (double)gridView:(id)arg1 widthForColumnAt:(int)arg2;
- (void)didReceiveMemoryWarning;
- (void)DigitUpDataUI:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

