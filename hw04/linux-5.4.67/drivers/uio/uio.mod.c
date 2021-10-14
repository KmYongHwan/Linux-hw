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
	{ 0xe7750f8, "kobject_put" },
	{ 0x2bdb9d00, "cdev_alloc" },
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xe7d72b83, "kobject_set_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x663917ca, "generic_access_phys" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x548bc933, "class_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2864d614, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x752832c, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xb6f7270a, "device_add" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf720a60b, "module_put" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x963cf8c8, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x7c914fde, "kobject_init" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "591992B9182773F113E4868");
