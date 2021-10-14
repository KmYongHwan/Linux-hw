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
	{ 0xf9a482f9, "msleep" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xe83cfdb5, "nci_recv_frame" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4c9df0f4, "nxp_nci_probe" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x245bb34a, "nxp_nci_remove" },
	{ 0xd9126df8, "nxp_nci_fw_recv_frame" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "nci,nxp-nci");

MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2c");
MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2cC*");
MODULE_ALIAS("acpi*:NXP1001:*");
MODULE_ALIAS("acpi*:NXP7471:*");
MODULE_ALIAS("i2c:nxp-nci_i2c");

MODULE_INFO(srcversion, "90742457C9694F4C719C283");
