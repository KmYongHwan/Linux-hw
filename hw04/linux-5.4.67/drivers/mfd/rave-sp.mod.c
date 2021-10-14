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
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x7cfd592b, "devres_alloc_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1113c204, "__serdev_device_driver_register" },
	{ 0x9f01c0c9, "serdev_device_write" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcc4b4b6, "crc_ccitt_false" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x5680b13c, "devres_add" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Czii,rave-sp-niu");
MODULE_ALIAS("of:N*T*Czii,rave-sp-niuC*");
MODULE_ALIAS("of:N*T*Czii,rave-sp-mezz");
MODULE_ALIAS("of:N*T*Czii,rave-sp-mezzC*");
MODULE_ALIAS("of:N*T*Czii,rave-sp-esb");
MODULE_ALIAS("of:N*T*Czii,rave-sp-esbC*");
MODULE_ALIAS("of:N*T*Czii,rave-sp-rdu1");
MODULE_ALIAS("of:N*T*Czii,rave-sp-rdu1C*");
MODULE_ALIAS("of:N*T*Czii,rave-sp-rdu2");
MODULE_ALIAS("of:N*T*Czii,rave-sp-rdu2C*");

MODULE_INFO(srcversion, "A81D3AB6A8001FB7659E9DF");
