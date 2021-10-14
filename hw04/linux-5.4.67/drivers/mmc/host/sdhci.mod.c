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
	{ 0x206f6227, "mmc_command_done" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5386438a, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5b6b0329, "swiotlb_max_segment" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5fb97c3d, "regulator_is_supported_voltage" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x5efe121, "mmc_can_gpio_cd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9204f87, "mmc_can_gpio_ro" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x73383a98, "mmc_gpio_get_ro" },
	{ 0xde006432, "sg_miter_next" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x89ee9574, "regulator_get_current_limit" },
	{ 0x43551e0, "mmc_gpio_get_cd" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd726a492, "sdio_signal_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x87b22bbc, "mmc_regulator_set_ocr" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc11e6472, "mmc_abort_tuning" },
	{ 0xe8614fdf, "mmc_regulator_set_vqmmc" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc55d955, "mmc_regulator_get_supply" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xaa309cf, "synchronize_hardirq" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc21eab3c, "mmc_retune_timer_stop" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "06A7559EDC404E116B1A9EE");
