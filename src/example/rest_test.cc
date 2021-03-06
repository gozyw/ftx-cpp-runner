#include "rest/client.h"

#include <iostream>

int main()
{
    std::string key = "f4ZnOlIHgw7pOOGi6v8PSsueUjfWUBe9JVGgFSpf";
    std::string secret = "Tw53GiVsodLAFAitxD0dvoKQtpGHpbRyJML_jD3_";
    ftx::RESTClient client(key, secret);

    auto futs = client.list_futures();
    std::cout << futs << "\n";

    auto markets = client.list_futures();
    std::cout << markets << "\n";

    auto ob = client.get_orderbook("BTC-PERP", 3);
    std::cout << ob << "\n\n";

    auto acct = client.get_account_info();
    std::cout << acct << "\n\n";

    auto ord = client.place_order("BTC-PERP", "buy", 10, 0.01);
    std::cout << ord << "\n\n";
}
