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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba312d7b, "current_task" },
	{ 0x754d539c, "strlen" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb870db52, "atm_charge" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xa6209c40, "atm_dev_signal_change" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa9e31e3e, "atm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x15314fce, "consume_skb" },
	{ 0x16ce10d6, "atm_dev_deregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc5850110, "printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xede283d, "release_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x71deb539, "request_firmware" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb18156be, "skb_pull" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v000010EEd00000300sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9E1B5A29D38669973761FF1");
