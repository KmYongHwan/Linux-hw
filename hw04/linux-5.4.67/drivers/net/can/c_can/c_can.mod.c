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
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0x8cdde1de, "pinctrl_select_state" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x7ce818cb, "pinctrl_lookup_state" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0xafd20693, "pinctrl_get" },
	{ 0x8eb937e0, "close_candev" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf2acf242, "free_candev" },
	{ 0x818ea7be, "pinctrl_pm_select_sleep_state" },
	{ 0xc0a94649, "pinctrl_put" },
	{ 0x601aeedc, "can_change_mtu" },
	{ 0x4013106f, "unregister_candev" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xef0f8607, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x127bd30c, "open_candev" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "6B921597371D6FF1A1EE553");
