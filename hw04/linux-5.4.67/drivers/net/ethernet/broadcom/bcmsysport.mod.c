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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xb8e75250, "phy_start" },
	{ 0xbcab0ef6, "phy_resume" },
	{ 0x15314fce, "consume_skb" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x12a38747, "usleep_range" },
	{ 0xce42b30d, "phy_suspend" },
	{ 0x5a889429, "phy_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x5c5bb8ee, "unregister_dsa_notifier" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,systemportlite-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemportlite-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport");
MODULE_ALIAS("of:N*T*Cbrcm,systemportC*");

MODULE_INFO(srcversion, "F3E53E6831493BA65F073C6");
