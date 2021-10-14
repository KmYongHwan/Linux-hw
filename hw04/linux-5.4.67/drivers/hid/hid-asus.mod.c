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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0xef5593c0, "power_supply_powers" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb0e602eb, "memmove" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x57c46ceb, "asus_wmi_evaluate_method" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,asus-wmi");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v00000B05p0000183D");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");

MODULE_INFO(srcversion, "B6B30E00C10791AFE4EC7DC");
