//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDIMBaseModel.h"

@class NSNumber, NSString;

@interface JDIMSkuInfoModel : JDIMBaseModel
{
    NSNumber *_brandId;
    NSString *_brandName;
    NSString *_shopId;
    NSString *_shopName;
    NSString *_venderId;
    NSString *_venderName;
    NSString *_pid;
    NSString *_name;
    NSString *_imgurl;
    NSNumber *_price;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *venderName; // @synthesize venderName=_venderName;
@property(retain, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NSNumber *brandId; // @synthesize brandId=_brandId;
- (void).cxx_destruct;
- (_Bool)setDic:(id)arg1;

@end
