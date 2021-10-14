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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdc56281b, "pcim_pin_device" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0xc2527d0a, "pci_rescan_bus" },
	{ 0x7a4d5f5c, "pci_stop_and_remove_bus_device" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x7208bf2, "pcim_iounmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xede283d, "release_firmware" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xfe94e94a, "pcim_iomap" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x29361773, "complete" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000168Cd0000FF1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EFC60B738D2E3B49E129FAF");
