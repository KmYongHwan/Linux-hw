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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xec4b7ee9, "dma_async_tx_descriptor_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1fa1d95c, "sha256_zero_message_hash" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8a56d877, "dma_async_device_register" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xf48c92ea, "dmaengine_unmap_put" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x47fda759, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x803b5d3f, "device_get_dma_attr" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0xea1b0fd8, "dma_run_dependencies" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x946dd559, "sha224_zero_message_hash" },
	{ 0x7b5a4926, "sha1_zero_message_hash" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x77738a68, "dma_async_device_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x772408b5, "firmware_request_nowarn" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xede283d, "release_firmware" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001456sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001468sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001486sv*sd*bc*sc*i*");
MODULE_ALIAS("acpi*:AMDI0C00:*");

MODULE_INFO(srcversion, "C49E7A6962E8AF7C6A19336");
