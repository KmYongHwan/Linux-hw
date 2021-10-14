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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x80868ed7, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xb1919055, "scsi_get_device_flags_keyed" },
	{ 0x245de4df, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4e298b44, "anon_transport_class_register" },
	{ 0xf0b30789, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65cb24ed, "scsi_device_quiesce" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xd1afe18b, "sysfs_chmod_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x571da921, "__scsi_execute" },
	{ 0x5a921311, "strncmp" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0x4beaf2ec, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xda6ec6cc, "transport_class_unregister" },
	{ 0x2d721cca, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a8ae03, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x544c84bd, "scsi_target_quiesce" },
	{ 0xf480d24c, "scsi_is_target_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8b55dc9e, "scsi_device_get" },
	{ 0xf977caa5, "anon_transport_class_unregister" },
	{ 0xcc18e79c, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85F530D6C3B3E8FC3CD2B94");
