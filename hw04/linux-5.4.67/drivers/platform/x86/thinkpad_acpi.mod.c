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
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xff76d558, "input_register_device" },
	{ 0xac1637ea, "proc_create_data" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x9fc1991d, "hwmon_device_register_with_groups" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xe13cd8a7, "dmi_name_in_vendors" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x9d19883e, "led_classdev_suspend" },
	{ 0x2509742, "led_update_brightness" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x65523885, "snd_card_new" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x68a57338, "snd_card_free" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xc10040e, "device_add_groups" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9166fada, "strncpy" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70691c99, "single_open" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc7ed4c04, "led_classdev_resume" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xeaeec424, "backlight_force_update" },
	{ 0xf09dc6d3, "led_classdev_notify_brightness_hw_changed" },
	{ 0x5ada0011, "input_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd3d70f53, "snd_ctl_notify" },
	{ 0xfa52aa89, "driver_create_file" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x24e4f228, "__task_pid_nr_ns" },
	{ 0xba312d7b, "current_task" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc35a23d5, "driver_remove_file" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x39e87584, "battery_hook_register" },
	{ 0xbfa087b0, "device_remove_groups" },
	{ 0x1e6eae8, "battery_hook_unregister" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0x349cba85, "strchr" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xc5850110, "printk" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3ef38dc9, "arch_nvram_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd,video,ledtrig-audio,nvram");

MODULE_ALIAS("acpi*:IBM0068:*");
MODULE_ALIAS("acpi*:LEN0068:*");
MODULE_ALIAS("acpi*:LEN0268:*");

MODULE_INFO(srcversion, "244EE1C07B382DED86DB01C");
