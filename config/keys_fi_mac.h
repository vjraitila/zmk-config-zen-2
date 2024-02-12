/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FI_SECT GRAVE // §
#define FI_1    N1    // 1
#define FI_2    N2    // 2
#define FI_3    N3    // 3
#define FI_4    N4    // 4
#define FI_5    N5    // 5
#define FI_6    N6    // 6
#define FI_7    N7    // 7
#define FI_8    N8    // 8
#define FI_9    N9    // 9
#define FI_0    N0    // 0
#define FI_PLUS MINUS // +
#define FI_ACUT EQUAL // ´ (dead)
// Row 2
#define FI_Q    Q    // Q
#define FI_W    W    // W
#define FI_E    E    // E
#define FI_R    R    // R
#define FI_T    T    // T
#define FI_Y    Y    // Y
#define FI_U    U    // U
#define FI_I    I    // I
#define FI_O    O    // O
#define FI_P    P    // P
#define FI_ARNG LBKT // Å
#define FI_DIAE RBKT // ¨ (dead)
// Row 3
#define FI_A    A    // A
#define FI_S    S    // S
#define FI_D    D    // D
#define FI_F    F    // F
#define FI_G    G    // G
#define FI_H    H    // H
#define FI_J    J    // J
#define FI_K    K    // K
#define FI_L    L    // L
#define FI_ODIA SEMI // Ö
#define FI_ADIA SQT  // Ä
#define FI_QUOT NUHS // '
// Row 4
#define FI_LABK NUBS  // <
#define FI_Z    Z     // Z
#define FI_X    X     // X
#define FI_C    C     // C
#define FI_V    V     // V
#define FI_B    B     // B
#define FI_N    N     // N
#define FI_M    M     // M
#define FI_COMM COMMA // ,
#define FI_DOT  DOT   // .
#define FI_MINS FSLH  // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ # │ € │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FI_DEG  LS(FI_SECT) // °
#define FI_EXLM LS(FI_1)    // !
#define FI_DQUO LS(FI_2)    // "
#define FI_HASH LS(FI_3)    // #
#define FI_EURO LS(FI_4)    // €
#define FI_PERC LS(FI_5)    // %
#define FI_AMPR LS(FI_6)    // &
#define FI_SLSH LS(FI_7)    // /
#define FI_LPRN LS(FI_8)    // (
#define FI_RPRN LS(FI_9)    // )
#define FI_EQL  LS(FI_0)    // =
#define FI_QUES LS(FI_PLUS) // ?
#define FI_GRV  LS(FI_ACUT) // `
// Row 2
#define FI_CIRC LS(FI_DIAE) // ^ (dead)
// Row 3
#define FI_ASTR LS(FI_QUOT) // *
// Row 4
#define FI_RABK LS(FI_LABK) // >
#define FI_SCLN LS(FI_COMM) // ;
#define FI_COLN LS(FI_DOT)  // :
#define FI_UNDS LS(FI_MINS) // _

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ¶ │ © │ @ │ £ │ $ │ ∞ │   │ | │ [ │ ] │ ≈ │ ± │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ • │ Ω │ É │ ® │ † │ µ │ Ü │ ı │ Œ │ π │ ˙ │ ~ │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │  │ ß │ ∂ │ ƒ │ ¸ │ ˛ │ √ │ ª │ ﬁ │ Ø │ Æ │ ™ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ÷ │   │ Ç │ ‹ │ › │ ‘ │ ’ │ ‚ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1 
#define FI_PILC LA(FI_SECT) // ¶
#define FI_COPY LA(FI_1)    // ©
#define FI_AT   LA(FI_2)    // @
#define FI_PND  LA(FI_3)    // £
#define FI_DLR  LA(FI_4)    // $
#define FI_INFN LA(FI_5)    // ∞
#define FI_PIPE LA(FI_7)    // |
#define FI_LBRC LA(FI_8)    // [
#define FI_RBRC LA(FI_9)    // ]
#define FI_AEQL LA(FI_0)    // ≈
#define FI_PLMN LA(FI_PLUS) // ±
// Row 2
#define FI_BULT LA(FI_Q)    // •
#define FI_OMEG LA(FI_W)    // Ω
#define FI_EACU LA(FI_E)    // É
#define FI_REGD LA(FI_R)    // ®
#define FI_DAGG LA(FI_T)    // †
#define FI_MICR LA(FI_Y)    // µ
#define FI_UDIA LA(FI_U)    // Ü
#define FI_DLSI LA(FI_I)    // ı
#define FI_OE   LA(FI_O)    // Œ
#define FI_PI   LA(FI_P)    // π
#define FI_DOTA LA(FI_ARNG) // ˙
#define FI_TILD LA(FI_DIAE) // ~ (dead)
// Row 3
#define FI_APPL LA(FI_A)    //  (Apple logo)
#define FI_SS   LA(FI_S)    // ß
#define FI_PDIF LA(FI_D)    // ∂
#define FI_FHK  LA(FI_F)    // ƒ
#define FI_CEDL LA(FI_G)    // ¸
#define FI_OGON LA(FI_H)    // ˛
#define FI_SQRT LA(FI_J)    // √
#define FI_FORD LA(FI_K)    // ª
#define FI_FI   LA(FI_L)    // ﬁ
#define FI_OSTR LA(FI_ODIA) // Ø
#define FI_AE   LA(FI_ADIA) // Æ
#define FI_TM   LA(FI_QUOT) // ™
// Row 4
#define FI_LTEQ LA(FI_LABK) // ≤
#define FI_DIV  LA(FI_Z)    // ÷
#define FI_CCED LA(FI_C)    // Ç
#define FI_LSAQ LA(FI_V)    // ‹
#define FI_RSAQ LA(FI_B)    // ›
#define FI_LSQU LA(FI_N)    // ‘
#define FI_RSQU LA(FI_M)    // ’
#define FI_SLQU LA(FI_COMM) // ‚
#define FI_ELLP LA(FI_DOT)  // …
#define FI_NDSH LA(FI_MINS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¡ │ ” │ ¥ │ ¢ │ ‰ │   │ \ │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │ ˝ │   │   │ ‡ │ ˜ │   │ ˆ │   │ ∏ │ ˚ │   │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ ◊ │ ∑ │ ∆ │ ∫ │ ¯ │ ˘ │ ¬ │ º │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ⁄ │ ˇ │   │ « │ » │ “ │ ” │ „ │ · │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define FI_IEXL LS(LA(FI_1))    // ¡
#define FI_YEN  LS(LA(FI_3))    // ¥
#define FI_CENT LS(LA(FI_4))    // ¢
#define FI_PERM LS(LA(FI_5))    // ‰
#define FI_BSLS LS(LA(FI_7))    // (backslash)
#define FI_LCBR LS(LA(FI_8))    // {
#define FI_RCBR LS(LA(FI_9))    // }
#define FI_NEQL LS(LA(FI_0))    // ≠
#define FI_IQUE LS(LA(FI_PLUS)) // ¿
// Row 2
#define FI_DACU LS(LA(FI_W))    // ˝
#define FI_DDAG LS(LA(FI_T))    // ‡
#define FI_STIL LS(LA(FI_Y))    // ˜
#define FI_DCIR LS(LA(FI_I))    // ˆ
#define FI_NARP LS(LA(FI_P))    // ∏
#define FI_RNGA LS(LA(FI_ARNG)) // ˚
// Row 3
#define FI_LOZN LS(LA(FI_A))    // ◊
#define FI_NARS LS(LA(FI_S))    // ∑
#define FI_INCR LS(LA(FI_D))    // ∆
#define FI_INTG LS(LA(FI_F))    // ∫
#define FI_MACR LS(LA(FI_G))    // ¯
#define FI_BREV LS(LA(FI_H))    // ˘
#define FI_NOT  LS(LA(FI_J))    // ¬
#define FI_MORD LS(LA(FI_K))    // º
#define FI_FL   LS(LA(FI_L))    // ﬂ
// Row 4
#define FI_GTEQ LS(LA(FI_LABK)) // ≥
#define FI_FRSL LS(LA(FI_Z))    // ⁄
#define FI_CARN LS(LA(FI_X))    // ˇ
#define FI_LDAQ LS(LA(FI_V))    // «
#define FI_RDAQ LS(LA(FI_B))    // »
#define FI_LDQU LS(LA(FI_N))    // “
#define FI_RDQU LS(LA(FI_M))    // ”
#define FI_DLQU LS(LA(FI_COMM)) // „
#define FI_MDDT LS(LA(FI_DOT))  // ·
#define FI_MDSH LS(LA(FI_MINS)) // —