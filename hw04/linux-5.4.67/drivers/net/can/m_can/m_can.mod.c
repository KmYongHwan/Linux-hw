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
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0x8eb937e0, "close_candev" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf2acf242, "free_candev" },
	{ 0x818ea7be, "pinctrl_pm_select_sleep_state" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x601aeedc, "can_change_mtu" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4013106f, "unregister_candev" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xef0f8607, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x127bd30c, "open_candev" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0x1498124e, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf3e771b0, "can_get_echo_skb" },
	{ 0xd8b09a7d, "can_put_echo_skb" },
	{ 0x164e2a63, "can_free_echo_skb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "7860C7A59C696AFC28C4D72");
