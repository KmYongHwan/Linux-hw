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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x510a2188, "cec_received_msg_ts" },
	{ 0xad01daf9, "cec_transmit_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe68bb9c0, "cec_register_cec_notifier" },
	{ 0x23586338, "devm_remove_action" },
	{ 0x4d78006b, "cec_register_adapter" },
	{ 0xd9d6f0ca, "cec_notifier_get_conn" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xf8a9fd43, "cec_allocate_adapter" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xb248b951, "cec_delete_adapter" },
	{ 0xb4e2add, "cec_notifier_put" },
	{ 0x7408623a, "cec_unregister_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tda9950");

MODULE_INFO(srcversion, "853CD6F0D4B93819622BDA9");
