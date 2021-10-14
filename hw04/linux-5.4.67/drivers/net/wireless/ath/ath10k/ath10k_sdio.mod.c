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
	{ 0xd2ebfaf6, "ath10k_core_unregister" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa2b9bc6a, "ath10k_core_register" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0xf4608acd, "mmc_hw_reset" },
	{ 0xb477543, "mmc_wait_for_cmd" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd28918b8, "ath10k_core_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x50dd77c4, "__tracepoint_ath10k_log_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15e5db2, "ath10k_debug_mask" },
	{ 0x762c19a9, "sdio_writel" },
	{ 0xcc5aecdf, "ath10k_mac_tx_push_pending" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf4d75b56, "ath10k_core_create" },
	{ 0x367b747d, "sdio_readl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0x7cd8c1c, "ath10k_htc_process_trailer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x90bfde8e, "ath10k_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa8f6bf5c, "sdio_memcpy_toio" },
	{ 0xecea3377, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x15314fce, "consume_skb" },
	{ 0xd79398b2, "sdio_memcpy_fromio" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0x1a15997b, "ath10k_htc_notify_tx_completion" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0xb3dcfb60, "sdio_release_host" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("sdio:c*v0271d050A*");
MODULE_ALIAS("sdio:c*v0271d0701*");

MODULE_INFO(srcversion, "9B8E9F85CC298B36698519D");
