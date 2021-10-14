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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x1cd2555a, "ieee802154_hdr_peek_addrs" },
	{ 0x546e109c, "ieee802154_register_hw" },
	{ 0xc9f0f517, "clk_register_fixed_rate" },
	{ 0xeb30fee3, "gpiod_unexport" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x25810ec3, "debugfs_create_symlink" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x428a36f, "ieee802154_alloc_hw" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x1530bda3, "ieee802154_wake_queue" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6c5b8787, "ieee802154_xmit_complete" },
	{ 0x54d29d1e, "ieee802154_rx_irqsafe" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x89b6037a, "ieee802154_hdr_push" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0xe1f074c8, "ieee802154_free_hw" },
	{ 0xa19ac719, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x29361773, "complete" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x25334866, "spi_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ieee802154,mac802154");

MODULE_ALIAS("of:N*T*Ccascoda,ca8210");
MODULE_ALIAS("of:N*T*Ccascoda,ca8210C*");

MODULE_INFO(srcversion, "5042B296836BAC4F3013FC0");
