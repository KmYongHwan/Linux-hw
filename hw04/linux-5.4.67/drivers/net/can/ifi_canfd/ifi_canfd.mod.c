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
	{ 0x601aeedc, "can_change_mtu" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x127bd30c, "open_candev" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0x8eb937e0, "close_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0x1498124e, "alloc_canfd_skb" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xf2acf242, "free_candev" },
	{ 0x4013106f, "unregister_candev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cifi,canfd-1.0");
MODULE_ALIAS("of:N*T*Cifi,canfd-1.0C*");

MODULE_INFO(srcversion, "C4115A1A2C0DB4D58E9C3EA");
