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
	{ 0x4ffe1a, "i3c_master_queue_ibi" },
	{ 0x338f508d, "i3c_generic_ibi_get_free_slot" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x29361773, "complete" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcb4959cf, "i3c_master_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa24d377a, "i3c_master_set_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb3241db4, "i3c_master_defslvs_locked" },
	{ 0x97f764d0, "i3c_master_add_i3c_dev_locked" },
	{ 0x58bd0f, "i3c_master_entdaa_locked" },
	{ 0xbd08cf29, "i3c_master_get_free_addr" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdbfdd21c, "i3c_master_do_daa" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xafe6c38b, "i3c_generic_ibi_alloc_pool" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x76fe3e05, "i3c_generic_ibi_free_pool" },
	{ 0xbfcc4977, "i3c_master_enec_locked" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4940c6b0, "i3c_master_disec_locked" },
	{ 0x783a6051, "i3c_generic_ibi_recycle_slot" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6cf96a4f, "i3c_master_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i3c");


MODULE_INFO(srcversion, "274C86EEE2E067ABFF77976");
