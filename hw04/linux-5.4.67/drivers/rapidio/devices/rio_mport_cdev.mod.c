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
	{ 0xb014ea39, "rio_mport_class" },
	{ 0xd98f8549, "class_interface_unregister" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbc3b6516, "class_interface_register" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x66414bc7, "__class_create" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x787cb63f, "rio_map_outb_region" },
	{ 0x4e1ed05d, "rio_mport_get_feature" },
	{ 0xed1238ea, "rio_mport_get_physefb" },
	{ 0xcc674e8f, "rio_add_net" },
	{ 0xfb833ac6, "rio_alloc_net" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xc17a71cf, "rio_map_inb_region" },
	{ 0xdff288df, "rio_free_net" },
	{ 0x7eeacce5, "rio_del_device" },
	{ 0x1568e79a, "rio_dev_put" },
	{ 0x122917, "rio_get_comptag" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x3c167bf4, "rio_request_mport_dma" },
	{ 0x89c70303, "rio_dma_prep_xfer" },
	{ 0xee3124a4, "sg_alloc_table_from_pages" },
	{ 0x856befeb, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc943a830, "rio_request_inb_dbell" },
	{ 0xa77b0c68, "rio_dev_get" },
	{ 0x5d446a0a, "rio_add_device" },
	{ 0xaf78ec83, "rio_attach_device" },
	{ 0xfe50ef42, "bus_find_device" },
	{ 0x46211041, "rio_bus_type" },
	{ 0x349cc11, "device_match_name" },
	{ 0x28433c7c, "rio_local_set_device_id" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x1a05bc0e, "rio_pw_enable" },
	{ 0x7138f4c9, "rio_add_mport_pw_handler" },
	{ 0xba312d7b, "current_task" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x29361773, "complete" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc829f7c0, "dma_mmap_attrs" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xfed11957, "vm_iomap_memory" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x959a71a6, "rio_release_inb_dbell" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0x69c3d482, "cdev_device_del" },
	{ 0xb8fa4a10, "rio_del_mport_pw_handler" },
	{ 0x5023bef2, "rio_release_dma" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5c970bff, "rio_query_mport" },
	{ 0x523c78db, "cdev_device_add" },
	{ 0x40748904, "cdev_init" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xc92dedc0, "rio_mport_write_config_32" },
	{ 0xeadadc80, "__rio_local_write_config_32" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x999e8297, "vfree" },
	{ 0xeeca87bd, "rio_mport_read_config_32" },
	{ 0xfee402dd, "__rio_local_read_config_32" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8297dab8, "rio_mport_send_doorbell" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7ea19302, "put_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x963cf8c8, "get_device" },
	{ 0x2864d614, "fasync_helper" },
	{ 0x7d8617d4, "rio_unmap_outb_region" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xe0c2eef7, "rio_unmap_inb_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB9AF32EA3B9F451901DD9C");
