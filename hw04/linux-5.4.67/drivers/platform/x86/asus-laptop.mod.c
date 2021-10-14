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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xc042b99a, "input_unregister_polled_device" },
	{ 0x47a83910, "input_free_polled_device" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x5f0e284b, "input_allocate_polled_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x9f08d1ab, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x668baa1f, "acpi_bus_get_status" },
	{ 0x5a921311, "strncmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x5ada0011, "input_event" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xeaeec424, "backlight_force_update" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev,sparse-keymap,video");

MODULE_ALIAS("acpi*:ATK0100:*");
MODULE_ALIAS("acpi*:ATK0101:*");

MODULE_INFO(srcversion, "99F250EC9C5B33B774C621D");
