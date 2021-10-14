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
	{ 0xa07a0caf, "param_get_bool" },
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0x277a6037, "hid_add_device" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0x5792f848, "strlcpy" },
	{ 0x32ea5ef6, "hid_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0xef5593c0, "power_supply_powers" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x387c599f, "hid_destroy_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x5ada0011, "input_event" },
	{ 0x12fa8db6, "hid_input_report" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x63ff5507, "param_set_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69acdf38, "memcpy" },
	{ 0x335bbcdd, "hid_alloc_report_buf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0xc5850110, "printk" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0xbf0837a6, "hid_parse_report" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "A25E4F431A57A9C535E5DB4");
