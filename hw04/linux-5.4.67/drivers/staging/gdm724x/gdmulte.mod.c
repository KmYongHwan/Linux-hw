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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1741fd40, "netlink_has_listeners" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x40aebdcf, "sock_release" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x3d61149f, "usb_enable_autosuspend" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3785c132, "init_net" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa469a2d, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15314fce, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1076p8000d*dc*dsc*dp*ic02isc06ip*in*");
MODULE_ALIAS("usb:v1076p9000d*dc*dsc*dp*ic02isc06ip*in*");

MODULE_INFO(srcversion, "020ACDABB382B4E4BF5AFB7");
