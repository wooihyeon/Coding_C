#include <stdio.h>

int main() {
    int rt_avg, service_avg, other_avg;
    double sh_discount = 0, kb_discount = 0;
    double sh_rate_rt = 0, sh_rate_sv = 0, kb_rate_rt = 0, kb_rate_sv = 0;
    int prev_total_sh = 0, prev_total_kb = 0;

    printf("*** 신한/국민 K-패스 체크카드 시뮬레이션 프로그램 ***\n");

    while (1) {
        printf("월평균 대중교통 요금: ");
        scanf_s("%d", &rt_avg);
        if (rt_avg < 0) {
            printf("0원 이상의 값으로 다시 입력하세요.\n");
            continue;
        }
        else {
            break;
        }
    }

    while (1) {
        printf("월평균 생활 서비스 결제액: ");
        scanf_s("%d", &service_avg);
        if (service_avg < 0) {
            printf("0원 이상의 값으로 다시 입력하세요.\n");
            continue;
        }
        else {
            break;
        }
    }

    while (1) {
        printf("월평균 기타 결제액: ");
        scanf_s("%d", &other_avg);
        if (other_avg < 0) {
            printf("0원 이상의 값으로 다시 입력하세요.\n");
            continue;
        }
        else {
            break;
        }
    }

    prev_total_sh = rt_avg + service_avg + other_avg;

    if (prev_total_sh >= 500000) {
        sh_rate_rt = 0.1;
        sh_rate_sv = 0.02;
        if (rt_avg * sh_rate_rt > 5000) {
            sh_discount += 5000;
        }
        else {
            sh_discount += rt_avg * sh_rate_rt;
        }
        if (service_avg * sh_rate_sv > 5000) {
            sh_discount += 5000;
        }
        else {
            sh_discount += service_avg * sh_rate_sv;
        }
    }
    else if (prev_total_sh >= 200000) {
        sh_rate_rt = 0.1;
        sh_rate_sv = 0.02;
        if (rt_avg * sh_rate_rt > 2000) {
            sh_discount += 2000;
        }
        else {
            sh_discount += rt_avg * sh_rate_rt;
        }
        if (service_avg * sh_rate_sv > 2000) {
            sh_discount += 2000;
        }
        else {
            sh_discount += service_avg * sh_rate_sv;
        }
    }

    prev_total_kb = rt_avg + service_avg + other_avg;

    if (prev_total_kb >= 200000) {
        kb_rate_rt = 0.1;
        kb_rate_sv = 0.02;
        if (rt_avg * kb_rate_rt > 2000) {
            kb_discount += 2000;
        }
        else {
            kb_discount += rt_avg * kb_rate_rt;
        }
        if (service_avg * kb_rate_sv > 8000) {
            kb_discount += 8000;
        }
        else {
            kb_discount += service_avg * kb_rate_sv;
        }
    }

    printf("신한 K-패스 체크카드의 예상 할인 금액은 %.0f원이며, 할인률은 %.2f%%입니다.\n", sh_discount, (sh_discount / prev_total_sh) * 100);
    printf("국민 K-패스 체크카드의 예상 할인 금액은 %.0f원이며, 할인률은 %.2f%%입니다.\n", kb_discount, (kb_discount / prev_total_kb) * 100);

    if (sh_discount > kb_discount) {
        printf("따라서 신한 K-패스 체크카드가 더 나은 선택입니다.\n");
    }
    else if (kb_discount > sh_discount) {
        printf("따라서 국민 K-패스 체크카드가 더 나은 선택입니다.\n");
    }
    else {
        printf("따라서 어느 것을 선택하셔도 혜택이 동일합니다.\n");
    }

    return 0;
}
