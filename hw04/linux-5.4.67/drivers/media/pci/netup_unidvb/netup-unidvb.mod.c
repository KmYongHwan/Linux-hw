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
	{ 0xa24f23d8, "__request_module" },
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfc563763, "spi_register_controller" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa9263e2b, "pcie_capability_clear_and_set_word" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x73f66011, "vb2_dvb_unregister_bus" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf3a07da1, "vb2_dvb_dealloc_frontends" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9c3e6afa, "vb2_vmalloc_memops" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x236fd3f8, "vb2_plane_vaddr" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x85880327, "spi_new_device" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x34b989b3, "spi_unregister_controller" },
	{ 0x73f2f7cd, "dvb_ca_en50221_release" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa240c3bf, "vb2_dvb_alloc_frontend" },
	{ 0xc085bf, "vb2_dvb_get_frontend" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x63daea24, "dvb_ca_en50221_init" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x8271648f, "spi_finalize_current_message" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7bfd4444, "vb2_dvb_register_bus" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3498c007, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-dvb,videobuf2-vmalloc,videobuf2-common,dvb-core,videobuf2-v4l2");

MODULE_ALIAS("pci:v00001B55d000018F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B55d000018F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA273F03E2E7B8736F69D1D");
