//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDevice.h"

@interface GKSubDevice : GKDevice
{
    int _deviceType;
    int _deviceNum;
    int _Light_num;
    int _access1;
    int _access2;
    int _access3;
    int _access4;
    int _en_access1;
    int _en_access2;
    int _en_access3;
    int _en_access4;
    int _lock_status;
}

@property(nonatomic) int lock_status; // @synthesize lock_status=_lock_status;
@property(nonatomic) int en_access4; // @synthesize en_access4=_en_access4;
@property(nonatomic) int en_access3; // @synthesize en_access3=_en_access3;
@property(nonatomic) int en_access2; // @synthesize en_access2=_en_access2;
@property(nonatomic) int en_access1; // @synthesize en_access1=_en_access1;
@property(nonatomic) int access4; // @synthesize access4=_access4;
@property(nonatomic) int access3; // @synthesize access3=_access3;
@property(nonatomic) int access2; // @synthesize access2=_access2;
@property(nonatomic) int access1; // @synthesize access1=_access1;
@property(nonatomic) int Light_num; // @synthesize Light_num=_Light_num;
@property(nonatomic) int deviceNum; // @synthesize deviceNum=_deviceNum;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
- (void)setValueForSubDevice:(id)arg1;
- (int)getWindowsType;
- (id)GetSubSn;
- (int)GetDeviceCode;
- (id)initForLightIsOne:(_Bool)arg1;
- (id)init;

@end

