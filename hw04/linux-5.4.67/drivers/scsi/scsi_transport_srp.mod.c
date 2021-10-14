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
	{ 0x80868ed7, "transport_class_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x20592044, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf0b30789, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x2e0c5381, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbca4d3b0, "transport_configure_device" },
	{ 0x4beaf2ec, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb6f7270a, "device_add" },
	{ 0xda6ec6cc, "transport_class_unregister" },
	{ 0x5f4c3621, "scsi_target_unblock" },
	{ 0x7ea19302, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe6492f49, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x963cf8c8, "get_device" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x5d14d1b1, "transport_remove_device" },
	{ 0x129de197, "scsi_target_block" },
	{ 0x4e83cd98, "dev_set_name" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98CE3517D3DF1DD42043CF1");
