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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xac14880c, "dvb_module_probe" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x893058f5, "dvb_register_device" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x548bc933, "class_unregister" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x66e78e1a, "dvb_generic_release" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x73f2f7cd, "dvb_ca_en50221_release" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x88e96942, "device_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcb74683c, "dvb_unregister_device" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xacf1c9a7, "dvb_module_release" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x2fe5e766, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x63daea24, "dvb_ca_en50221_init" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3927325, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("pci:v0000DD01d00000002sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000003sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000005sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000006sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000007sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000008sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000009sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000011sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000012sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000013sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000201sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000203sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000210sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000220sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000320sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000321sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000322sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000323sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000328sv0000DD01sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000DD01d00000329sv0000DD01sd*bc*sc*i*");

MODULE_INFO(srcversion, "C1B6C8F471BF2D085A0825C");
