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
	{ 0xe00365c5, "uart_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9f6dd27d, "uart_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x9ac4fdd3, "uart_insert_char" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd9778c14, "uart_write_wakeup" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x29361773, "complete" },
	{ 0xede283d, "release_firmware" },
	{ 0x238695d4, "uart_add_one_port" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xa88406a3, "pcim_iomap_regions_request_all" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xc222c8b, "uart_update_timeout" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc6aa4a68, "uart_get_divisor" },
	{ 0x3c2271c8, "uart_get_baud_rate" },
	{ 0xb90692f4, "uart_remove_one_port" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011FEd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000047sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000067sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000068sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000072sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5AAF7B66FD56134B2F760A7");
