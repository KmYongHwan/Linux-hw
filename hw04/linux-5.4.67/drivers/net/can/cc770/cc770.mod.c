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
	{ 0xf3744f5f, "netdev_info" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x8eb937e0, "close_candev" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xc5850110, "printk" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf2acf242, "free_candev" },
	{ 0x601aeedc, "can_change_mtu" },
	{ 0x4013106f, "unregister_candev" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x127bd30c, "open_candev" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "C049D9E7C24A4EEC2F5FD32");
