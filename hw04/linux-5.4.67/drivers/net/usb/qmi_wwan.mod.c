#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0xca102794, "usbnet_open" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x90c556f7, "netif_stacked_transfer_operstate" },
	{ 0x3e49bf8a, "netdev_upper_dev_link" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xba312d7b, "current_task" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa17e8e13, "usbnet_change_mtu" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1e543389, "usbnet_get_ethernet_addr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x69b715b6, "usb_cdc_wdm_register" },
	{ 0x21f99bf6, "usbnet_get_endpoints" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0x15939d21, "cdc_parse_cdc_header" },
	{ 0x347bff33, "eth_commit_mac_addr_change" },
	{ 0x94c13bd7, "eth_prepare_mac_addr_change" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x96848186, "scnprintf" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x988a6c9b, "netdev_upper_dev_unlink" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2bec3ff2, "usbnet_write_cmd" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ae42707, "netdev_upper_get_next_dev_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,cdc-wdm");

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip09in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip39in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip69in*");
MODULE_ALIAS("usb:v22B8p*d*dc*dsc*dp*icFFiscFBipFFin*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip07in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip11in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip37in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip67in*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscF0ipFFin*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscF1ipFFin*");
MODULE_ALIAS("usb:v1410pB001d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9010d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9011d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8195d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8196d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp819Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v16D5p650Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p421Dd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p581Dd*dc*dsc*dp*icFFisc01ip07in*");
MODULE_ALIAS("usb:v2C7Cp0125d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C7Cp0306d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C7Cp0512d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C7Cp0800d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0408pEA42d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p6001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p7000d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p7001d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7002d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p8000d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p8001d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9003d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9005d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p900Ad*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Bd*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p900Dd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9010d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9010d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9011d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9011d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9021d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p9022d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9025d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9026d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p902Ed*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9031d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9032d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9035d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9036d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9037d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9038d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p903Bd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p903Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p903Dd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p903Ed*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9043d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9050d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9052d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9053d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9053d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9054d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9054d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9056d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in09*");
MODULE_ALIAS("usb:v05C6p9064d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9065d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9065d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9066d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9066d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9067d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9070d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9070d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9075d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9078d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9083d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9084d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p90B2d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9625d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0846p68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v0846p68D3d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v12D1p140Cd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v12D1p14ACd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v1435p0918d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1435p0918d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435p0918d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1435p3185d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435pD111d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435pD181d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1435pD181d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435pD181d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1435pD182d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435pD182d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1435pD191d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1508p1001d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1690p7588d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v16D8p6003d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6007d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6008d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6280d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7001d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7003d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v16D8p7004d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v16D8p7006d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v16D8p700Ad*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v16D8p7211d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7212d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7213d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7251d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v16D8p7252d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v16D8p7253d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0002d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0012d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0017d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0019d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0021d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0025d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0031d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0042d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0049d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0052d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0055d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0058d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0063d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0104d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0113d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0118d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0121d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0123d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0124d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0125d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v19D2p0126d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0130d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0133d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0141d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0157d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0158d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0167d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0168d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0176d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0178d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0191d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0199d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0200d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0257d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0265d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0284d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0326d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0396d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0412d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1008d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1010d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1012d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1018d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p1021d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1245d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1247d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1252d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1254d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1255d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p1255d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1256d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1270d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p1401d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1402d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1424d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1425d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1426d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1428d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1432d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p2002d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2001p7E16d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v2001p7E19d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2001p7E35d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2001p7E3Dd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2020p2031d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2020p2033d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2020p2060d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0F3Dp68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v114Fp68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68A2d*dc*dsc*dp*ic*isc*ip*in13*");
MODULE_ALIAS("usb:v1199p68C0d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68C0d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p901Cd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p901Fd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9041d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9041d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9051d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9053d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9054d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9055d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9056d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9057d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9061d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9063d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9063d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9071d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9071d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9079d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9079d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p907Bd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p907Bd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9091d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1BBBp011Ed*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1BBBp0203d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v2357p0201d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2357p9000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1BC7p1031d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1BC7p1040d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1050d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1100d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1BC7p1101d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1BC7p1200d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1BC7p1201d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1260d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1261d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1900d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v1C9Ep9801d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1C9Ep9803d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1C9Ep9B01d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v0B3CpC000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC001d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC002d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC004d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC005d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC00Ad*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC00Bd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0060d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0053d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0063d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1E2Dp0082d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0082d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1E2Dp0083d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp00B0d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v413Cp81A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A3d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A4d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A8d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A9d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B1d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B3d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B6d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B6d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v413Cp81CCd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81D7d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v413Cp81D7d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v413Cp81E0d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v03F0p4E1Dd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v03F0p9D1Dd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v22DEp9061d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1E0Ep9001d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v2C7Cp0121d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0191d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0195d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0296d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2CB7p0104d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0489pE0B4d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0489pE0B5d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9212d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v03F0p1F1Dd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v04DAp250Dd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v413Cp8172d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA002d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA003d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA004d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA005d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA006d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA007d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v0B05p1776d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2pFFF3d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9002d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9202d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9203d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9222d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9009d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v413Cp8186d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v413Cp8194d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p920Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9225d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9245d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v03F0p251Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9215d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9215d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9265d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9235d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9275d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0AF0p8120d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p68A5d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p68A9d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9001d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9003d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9004d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9005d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9006d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9007d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9008d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9009d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p900Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9011d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p8002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9205d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9013d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v03F0p371Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9015d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9019d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p901Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v12D1p14F1d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1410pA021d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "2F024D2B969C8339F6C55B3");
