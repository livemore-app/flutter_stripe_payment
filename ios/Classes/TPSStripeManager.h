//
//  TPSStripeManager.h
//  TPSStripe
//
//  Created by Anton Petrov on 28.10.16.
//  Copyright © 2016 Tipsi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PassKit/PassKit.h>
#import <Stripe/Stripe.h>

@interface StripeModule : NSObject <PKPaymentAuthorizationViewControllerDelegate, STPAddCardViewControllerDelegate>

@property (nonatomic) STPRedirectContext *redirectContext;

@end
