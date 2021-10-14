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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xff76d558, "input_register_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xd38a4a4e, "sparse_keymap_report_event" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5ada0011, "input_event" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0x56470118, "__warn_printk" },
	{ 0xff282521, "rfkill_register" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb578fc5, "memset" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
};

MODULE_INFO(depends, "wmi,sparse-keymap");


MODULE_INFO(srcversion, "20F560F4F6275D63DB2BACC");
